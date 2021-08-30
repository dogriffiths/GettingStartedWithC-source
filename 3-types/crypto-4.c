#include <stdio.h>

int main() {
    for (short dipcoins = 1; dipcoins <= 10; dipcoins++) {
        int cost = dipcoins / 100;
        printf("%i dipcoins costs $%i\n", dipcoins, cost);
    }
    return 0;
}
