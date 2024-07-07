#include <stdio.h>

//9. Determină dacă un tablou conține un element care apare de cel puțin n/3 ori.

int element_n(int arr[], int n) {

    int count[50] = {0};

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (count[i] >= n / 3) {
            return 1;
        }
    }

    return 0;
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

    if (element_n(arr, n)) {
        printf("Tabloul contine un element care apare de cel putin n/3 ori\n");
    } else {
        printf("Tabloul nu contine un element care apare de cel putin n/3 ori\n");
    }
    
    return 0;
}
