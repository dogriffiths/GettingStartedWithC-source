#include <stdio.h>

int main() {
    for (short dipcoins = 1; dipcoins <= 10; dipcoins++) {
        short cost = dipcoins * 30000;
        printf("%i dipcoins costs $%i\n", dipcoins, cost);
    }
    return 0;
}
