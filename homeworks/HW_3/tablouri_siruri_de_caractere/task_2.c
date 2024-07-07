//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
            Exercițiul 2. Scrie un program care să creeze un tablou de caractere și să îl umple cu primele 5 litere din alfabet. Afișează tabloul.
     */

    char arr[5] = {'A', 'B', 'C', 'D', 'E'};

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%c ", arr[i]);
    }

}