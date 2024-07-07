#include <stdio.h>

int main() {

    //Exercițiul 4. Scrie un program care cere utilizatorului să introducă două numere, apoi să afișeze produsul lor.

    int a, b;

    printf("a = ");     
    scanf("%d", &a);
    printf("b = ");     
    scanf("%d", &b);

    printf("produs: %d", a * b);
    
    return 0;
}