#include <stdio.h>
#include <math.h>

//  Adaugă un număr introdus de la tastatură într-un vector pe o locaţie indicată de la tastatură.


void adauga(int v1[], int n, int num, int loc) {

    for (int i = n; i > loc; i--) {
        v1[i] = v1[i - 1];
    }

    v1[loc] = num;

    for(int i = 0; i < n + 1; i++) {
        printf("%d ", v1[i]);
    }
}

int main(void) {
    int v1[]={54,2,6,7,8,65,21,91};

    int n = sizeof(v1) / sizeof(v1[0]);

    int num, loc;

    printf("num = ");
    scanf("%d", &num);

    printf("loc = ");
    scanf("%d", &loc);

    adauga(v1, n, num, loc);
    return 0;
}
