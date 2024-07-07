#include <stdio.h>

//3. Fă o funcție care să determine dacă un număr este prezent în tablou.

int cauta(int arr[], int n, int x) {

    for(int i = 0; i < n ; i++) {
        if(x == arr[i])
            return i;
    }

    return 0;
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

    printf("x = ");
    scanf("%d", &x);

    if(cauta(arr, n, x)) {
        printf("Nr %d se gaseste in arr[%d]", x, cauta(arr, n, x));
    }
    else {
        printf("Nr %d nu se gaseste in arr", x);
    }
    return 0;
}
