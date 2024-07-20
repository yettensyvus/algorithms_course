#include <stdio.h>

typedef struct Dreptunghi {
    double lungime;
    double latime;
} Dreptunghi;

int main(void) {

    Dreptunghi d = { .lungime = 2.5, .latime = 6.5 };

    double aria = d.lungime * d.latime;

    printf("\n Aria: %.2f", aria);

    return 0;
}
