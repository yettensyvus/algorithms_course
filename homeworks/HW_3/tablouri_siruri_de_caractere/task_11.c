//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 11. Scrie un program care să creeze un tablou de șiruri de caractere și să afișeze fiecare șir în ordine inversă.
     */

    char arr[10][50];

    int n;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int lungime = strlen(arr[i]);
        for (int j = 0; j < lungime / 2; j++) {
            char temp = arr[i][j];
            arr[i][j] = arr[i][lungime - j - 1];
            arr[i][lungime - j - 1] = temp;
        }
        printf("%s\n", arr[i]);
    }
}