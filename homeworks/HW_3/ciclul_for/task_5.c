//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        5. Scrie un program C care folosește un 'for' pentru a afișa tabla înmulțirii pentru un număr dat de utilizator (de la 1 la 10).
     */

    int n;
    printf("n = ");
    scanf("%d", &n);

    for(int i = 1; i <= 10; i++) {
       printf("%d * %d = %d\n", n, i, n * i);
    }


}