//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 7. Scrie un program care să creeze un tablou de numere întregi și să afișeze cel mai mare număr din tablou.
     */

    int arr[50];

    int n, max = 0;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);

        if(max < arr[i]) {
            max = arr[i];
        }
    }

    printf("max = %d",  max);
}
