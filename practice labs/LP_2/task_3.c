#include <stdio.h>

// Află care două elemente adunate ale unui vector formează numărul introdus de la tastatură.

void formeaza(int v1[], int n, int num) {

    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(num == v1[i] + v1[j]) {
                printf("nums (%d, %d) at [%d, %d])\n", v1[i], v1[j], i, j);
            }
        }
    }
}

int main(void) {
    int v1[]={4,2,3,5,1,3,8};

    int num;

    int n = sizeof(v1) / sizeof(v1[0]);

    printf("num = ");
    scanf("%d", &num);

    formeaza(v1, n, num);

    return 0;
}
