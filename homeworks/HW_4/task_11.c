#include <stdio.h>
#include <math.h>

//11. Găsește lungimea celei mai lungi secvențe de numere consecutive.

int subsir(int arr[], int n) {

    int max_len = 1, len = 1;
    int start_idx = 0 ,end_idx = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1] && arr[i] - 1 == arr[i - 1]) {
            len++;
        } else {
            if (len > max_len) {
                max_len = len;
                start_idx = i - max_len;
                end_idx = i - 1;
            }
            len = 1;
        }
    }

    if (len > max_len) {
        max_len = len;
        start_idx = n - max_len;
        end_idx = n - 1;
    }

    printf("Secventa: \n");

    for (int i = start_idx; i <= end_idx; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return max_len;
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

    printf("Vector: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Lungimea celei mai lungi secvente de numere consecutive: %d", subsir(arr, n));
    
    return 0;
}
