//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 10. Scrie un program care să creeze un tablou de caractere și să le ordoneze alfabetic. Afișează tabloul ordonat.
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

    char temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("tabloul ordonat: ");
    for(int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
}