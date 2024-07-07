//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 9. Scrie un program care să creeze un tablou de numere întregi. Programul trebuie să verifice dacă tabloul este sortat crescător.
     */

    int arr[50];

    int n, count = 0;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        if(arr[i] < arr[i + 1]) {
            count = 1;
        }
        else {
            count = 0;
            printf("Vectorul nu e sortat crescator!");
            break;
        }
    }

    if(count) {
        printf("Vectorul e sortat crescator!");
    }
}