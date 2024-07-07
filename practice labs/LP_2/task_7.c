#include <stdio.h>
#include <math.h>

// Şterge un număr dintr-un vector.

void sterge(int v1[], int n, int num) {

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (v1[i] != num) {
            v1[count] = v1[i];
            count++;
        }
    }

    n = count;

    for(int i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }

}

int main(void) {
    int v1[]={35,30,89,76,155,123};

    int n = sizeof(v1) / sizeof(v1[0]);

    int num;

    printf("n = ");
    scanf("%d", &num);

    sterge(v1, n, num);

    return 0;
}
