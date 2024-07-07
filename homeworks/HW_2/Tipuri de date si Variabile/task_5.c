#include <stdio.h>
#include <math.h>

int main() {

    //Exercițiul 5: Implementați un program care calculează și afișează valoarea expresiei   𝑥^3+x+1, unde  𝑥 este o variabilă int inițializată în program.

    int x = 7;
    int result = pow(x, 3) + x + 1;
    printf("result: %d", result);

    return 0;
}