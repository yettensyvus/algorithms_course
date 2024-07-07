#include <stdio.h>

int main(void) {

    int ore = 0;
    int total = 0;

    printf("ore = ");
    scanf("%d", &ore);

    if (ore <= 2) {
        total = ore * 50;
    } else if (ore <= 5) {
        total = 2 * 50 + (ore - 2) * 25;
    } else {
        total = 2 * 50 + 3 * 25 + (ore - 5) * 15;
    }

    printf("total = %.2f", total);
}