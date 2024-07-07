//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>

int main() {
    /*
        Exercițiul 5. Scrie un program care să creeze un tablou de caractere. Programul trebuie să afișeze numărul de vocale din tablou.
     */

    char arr[50];

    int n, count = 0;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        fflush(stdin);
        scanf("%c", &arr[i]);

        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
            count++;
        }
    }

    printf("total = %d", count);

}