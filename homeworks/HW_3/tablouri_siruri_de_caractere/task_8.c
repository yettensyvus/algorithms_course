//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 8. Scrie un program care să creeze un tablou de șiruri de caractere și să inverseze ordinea elementelor din tablou. Afișează tabloul inversat.
     */

    char arr[50];

    int n;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        fflush(stdin);
        scanf("%c", &arr[i]);
    }

    printf("tabloul initial: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }

    char temp;

    for(int i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    printf("tabloul invers: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
}