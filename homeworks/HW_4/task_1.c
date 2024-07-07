#include <stdio.h>

//1. Fă o funcție care să calculeze media aritmetică a elementelor unui tablou.

double media(int arr[], int n) {
    double media = 0;

    for(int i = 0; i < n; i++) {
        media += arr[i];
    }

    return media/n;
}

int main(void) {
    int n;
    int arr[50];
    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("media = %f", media(arr, n));

    return 0;
}
