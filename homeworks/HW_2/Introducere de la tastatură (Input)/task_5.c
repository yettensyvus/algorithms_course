#include <stdio.h>

int main() {

    //Exercițiul 6. Scrie un program care cere utilizatorului să introducă trei numere, apoi să afișeze media acestora.


    int a, b, c;


    printf("a = ");     
    scanf("%d", &a);
    printf("b = ");     
    scanf("%d", &b);
    printf("c = ");  
    scanf("%d", &c);

    printf("media: %.2f", (float)(a + b + c)/ 3);

    
    return 0;
}