from ctypes import *
from PIL import Image 

# Change filename to match the one on your machine
mandelbrot=CDLL("out/libmandelbrot.dylib")

w = 1200 
h = 1000 
zoom = 1000.0 
x = -0.7465 
y = 0.105025 

pixels=(c_uint * (w * h))() 

mandelbrot.mandelbrot(pointer(pixels), w, h, c_double(zoom), c_double(x), c_double(y)) 

img = Image.new('RGB', (w, h)) 
img.putdata(pixels) 
img.save('image.png') 
