#include <stdio.h>
#include <math.h>

// Află care două numere adunate ale unui vector sunt mai aproape de zero.

void zero(int v1[], int n) {

    int suma = v1[0];

    int a, b;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(suma > abs(v1[i] + v1[j])) {
                suma = v1[i] + v1[j];
                a = v1[i];
                b = v1[j];
            }
        }
    }

    printf("nums(%d, %d) ~ 0", a, b);
}

int main(void) {
    int v1[]={8,3,1,9,-4,7,10,3,9};

    int n = sizeof(v1) / sizeof(v1[0]);

    zero(v1, n);

    return 0;
}
