//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        3. Scrie un program C care folosește un 'for' pentru a afișa toate numerele pare între 1 și 20.
     */

    for(int i = 1; i <= 20; i++) {
       if(i % 2 == 0) {
           printf("%d ", i);
       }
    }


}