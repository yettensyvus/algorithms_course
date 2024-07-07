#include <stdio.h>

int main() {

    //Exercițiul 7: Implementați un program care calculează și afișează rezultatul expresiei (𝑎+𝑏)∗(𝑐−𝑑), unde a, b, c, și d sunt variabile inițializate în program.


    int a, b, c, d;
    a = 4; b = 8; c = 9; d = 2;

    int result = (a + b) * (c - d);

    printf("result: %d", result);

    return 0;
}