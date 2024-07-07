//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        2. Scrie un program C pentru a calcula suma primelor 10 numere naturale folosind un 'for'.
     */

    int suma = 0;

    for(int i = 1; i <= 10; i++) {
       suma += i;
    }

    printf("suma = %d", suma);
    
}