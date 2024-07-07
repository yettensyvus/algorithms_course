#include <stdio.h>

//5. Fă o funcție care să returneze diferența dintre cel mai mare și cel mai mic element din tablou.

int diferenta(int arr[], int n) {

    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < n ; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    return max - min;
}

int main(void) {

    int n, x;
    int arr[50];

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("diferenta = %d", diferenta(arr, n));

    return 0;
}
