#include <stdio.h>
#include <math.h>

// Determină diferenţa dintre doi vectori, într-un alt vector.

void dif_vector(int v1[], int v2[], int n, int m) {
    int v3[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (v1[i] == v2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            v3[count++] = v1[i];
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", v3[i]);
    }

}

int main(void) {
    int v1[]={2,3,1,7};
    int v2[]={3,5,8,2,4,6};


    int n = sizeof(v1) / sizeof(v1[0]);
    int m = sizeof(v2) / sizeof(v2[0]);

    dif_vector(v1, v2, n, m);

    return 0;
}
