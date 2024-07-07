#include <stdio.h>

// Determină intersecţia a doi vectori, într-un alt vector.

void intersectie(int v1[], int v2[], int n, int m) {
    int v3[n];
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v1[i] == v2[j]) {
                v3[count++] = v1[i];
            }
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

    intersectie(v1, v2, n, m);

    return 0;
}
