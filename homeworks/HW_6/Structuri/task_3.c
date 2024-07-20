#include <stdio.h>
#include <math.h>

typedef struct Punct {
    double x;
    double y;
} Punct;

int main(void) {
    Punct p1 = { .x = 1.5, .y = 6.0 };
    Punct p2 = { .x = 8.0, .y = 3.5 };

    printf("\n Punct 1: (%.2f, %.2f)", p1.x, p1.y);
    printf("\n Punct 2: (%.2f, %.2f)", p2.x, p2.y);

    double distanta = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));

    printf("\n Distanta:  %.2f", distanta);

    return 0;
}
