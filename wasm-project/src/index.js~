// Check for wasm support.
if (!('WebAssembly' in window)) {
  alert('you need a browser with wasm support enabled :(');
}

// Loads a WebAssembly dynamic library, returns a promise.
// imports is an optional imports object

let memory = null;
let global = null;

function loadWebAssembly(filename, imports) {
  // Fetch the file and compile it
  return fetch(filename)
    .then(response => response.arrayBuffer())
    .then(buffer => WebAssembly.compile(buffer))
    .then(module => {
      // Create the imports for the module, including the
      // standard dynamic library imports
      imports = imports || {};
      imports.env = imports.env || {};
      global = new WebAssembly.Global({
        value: 'i32',
        mutable: true
      }, 0);
      imports.env.global = global;
      imports.env.print = console.log;
      imports.env.__memory_base = imports.env.__memory_base || 0;
      imports.env.__table_base = imports.env.__table_base || 0;
      if (!imports.env.memory) {
        imports.env.memory = new WebAssembly.Memory({
          initial: 100
        });
      }
      memory = imports.env.memory;
      if (!imports.env.table) {
        imports.env.table = new WebAssembly.Table({
          initial: 0,
          element: 'anyfunc'
        });
      }
      // Create the instance.
      return new WebAssembly.Instance(module, imports);
    });
}

// Main part of this example, loads the module and uses it.
loadWebAssembly('../out/main.wasm')
  .then(instance => {
    var exports = instance.exports; // the exports of that instance
    memory = exports.memory;
    memory.grow(100);
    const width = 300;
    const height = 300;
    let zoom = 1.0;
    const heap = new Uint8Array(memory.buffer);
    let arr = new Uint8ClampedArray(memory.buffer, 0, width * height * 4);
    const canvas = document.getElementById('canvas');
    const ctx = canvas.getContext('2d');
    let imageData = new ImageData(arr, width);
    var mandelbrot = exports.mandelbrot;
    var button = document.getElementById('run');
    var running = false;
    button.value = 'Run C';

    var interval;
    button.addEventListener('click', function() {
      running = !running;
      if (interval) clearInterval(interval);
      interval = setInterval(function () {
        if (!running) return;
        mandelbrot(0, width, height, zoom, -0.7465, 0.105025);
        ctx.putImageData(imageData, 0, 0);
        zoom = zoom * 1.1;
        if (zoom > 10000) {
          zoom = 1.0;
        }
      }, 0);
    }, false);
  });