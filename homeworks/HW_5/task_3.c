#include <stdio.h>

#define N 3
#define M 3

//Ex3. Implementează o funcție care parcurge o matrice în forma de șarpe pe rânduri, alternând direcția de la stânga la dreapta și de la dreapta la stânga pentru fiecare rând.


void print_sarpe_randuri(int matrix[N][M], int n, int m) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i % 2 == 0) {
                printf("%d ", matrix[i][j]);
            }
            else {
                printf("%d ", matrix[i][m-j-1]);
            }
        }
        printf("\n");
    }
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    print_sarpe_randuri(matrix, N, M);

    return 0;
}
