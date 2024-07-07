#include <stdio.h>

int main() {

    //Exercițiul 2. Scrie un program care cere utilizatorului să introducă două numere, apoi să afișeze suma acestora.

    int a, b;

    printf("a = ");     
    scanf("%d", &a);
    printf("b = ");     
    scanf("%d", &b);

    printf("suma: %d", a + b);
    
    return 0;
}