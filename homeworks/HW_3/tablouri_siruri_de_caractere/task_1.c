//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        Exercițiul 1. Scrie un program care să creeze un tablou de numere întregi și să îl inițializeze cu primele 10 numere naturale. Afișează tabloul.
     */

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }

}