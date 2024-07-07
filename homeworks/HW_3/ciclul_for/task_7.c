//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        7. Scrie un program C care folosește un 'for' pentru a afișa toate numerele între 1 și 50 care sunt divizibile atât cu 3 cât și cu 5.
     */

    for(int i = 1; i <= 50; i++) {
       if(i % 3 == 0 && i % 5 == 0) {
           printf("%d ", i);
       }
    }


}