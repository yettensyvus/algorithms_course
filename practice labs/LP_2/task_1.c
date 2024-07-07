#include <stdio.h>

//Identifică toate elementele unice dintr-un tablou şi indică numărul de repetiții pentru fiecare element unic.

void unic(int v1[], int n) {
    int count[n];

    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v1[i] == v1[j]) {
                count[i]++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int print = 0;
        for (int j = 0; j < i; j++) {
            if (v1[i] == v1[j]) {
                print = 1;
                break;
            }
        }
        if (!print) {
            printf("%d = %d\n", v1[i], count[i]);
        }
    }
}

int main(void) {
    int v1[] = {45, 30, 45, 35, 67, 35, 30, 89, 90, 35};
    int n = sizeof(v1) / sizeof(v1[0]);

    unic(v1, n);

    return 0;
}
