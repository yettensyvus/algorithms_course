#include <stdio.h>
#include <math.h>

int main() {

    //Exercițiul 4: Creează un program care să calculeze și să afișeze volumul unui cub. Lungimea laturii cubului este definită în program.

    int latura = 12;
    int aria = 6 * pow(latura, 2);
    printf("volum: %d", pow(aria, 3));

    return 0;
}