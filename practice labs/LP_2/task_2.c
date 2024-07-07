#include <stdio.h>

// Determină reuniunea a doi vectori, într-un alt vector.

void reuniune(int v1[], int v2[], int n, int m) {
    int v3[n + m];
    int count = 0;

    for (int i = 0; i < n; i++) {
        v3[count++] = v1[i];
    }

    for (int i = 0; i < m; i++) {
        int found = 0;
        for (int j = 0; j < count; j++) {
            if (v2[i] == v3[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            v3[count++] = v2[i];
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", v3[i]);
    }
}

int main(void) {
    int v1[] = {2, 3, 1, 7};
    int v2[] = {3, 5, 8, 2, 4, 6};

    int n = sizeof(v1) / sizeof(v1[0]);
    int m = sizeof(v2) / sizeof(v2[0]);

    reuniune(v1, v2, n, m);

    return 0;
}
