#include <stdio.h>

int main() {

//  Exercițiul 4. Scrie un program care să verifice dacă un număr introdus de utilizator este pozitiv, negativ sau zero și să afișeze rezultatul.


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

    return 0;
}