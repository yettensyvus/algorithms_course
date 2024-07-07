#include <stdio.h>

int main() {

    //Exercițiul 6: Scrieți un program care calculează și afișează media aritmetică a trei numere întregi definite în cod.


    int a, b, c;
    a = 4; b = 5; c = 7;

    float media = (float)(a + b + c) / 3;

    printf("media: %.2f", media);

    return 0;
}