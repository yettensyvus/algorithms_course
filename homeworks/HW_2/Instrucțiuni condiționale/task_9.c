#include <stdio.h>

int main() {

    //Exercițiul 9. Scrie un program care să afișeze dacă un număr introdus de utilizator este pozitiv, negativ sau zero.


    int x;

    printf("x = ");
    scanf("%d", &x);

    if (x > 0) {
        printf("Numar pozitiv");
    }
    if (x < 0) {
        printf("Numar negativ");
    }
    if (x == 0) {
        printf("Zero");
    }
}