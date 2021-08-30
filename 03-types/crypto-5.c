#include <stdio.h>

int main() {
    for (short dipcoins = 1; dipcoins <= 10; dipcoins++) {
        double cost = dipcoins / 100.0;
        printf("%i dipcoins costs $%.2f\n", dipcoins, cost);
    }
    return 0;
}
