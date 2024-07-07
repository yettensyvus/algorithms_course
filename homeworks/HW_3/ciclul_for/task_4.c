//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        4. Scrie un program C care folosește un 'for' pentru a afișa toate numerele impare între 1 și 15.
     */

    for(int i = 1; i <= 15; i++) {
       if(i % 2 != 0) {
           printf("%d ", i);
       }
    }


}