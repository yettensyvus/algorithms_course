//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        Exercițiul 3. Scrie un program care să creeze un tablou de șiruri de caractere și să îl umple cu numele membrilor familiei tale. Afișează tabloul.
     */

    char arr[10][50];

    int n;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%s", arr[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

}