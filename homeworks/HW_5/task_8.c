#include <stdio.h>

#define N 3
#define M 3

//Ex8. Scrie un program care identifică și afișează elementul maxim pentru fiecare coloană al unei matrice.

void print_element_maxim_coloane(int matrix[N][M], int n, int m) {


    for(int j = 0; j < m; j++) {

        int max = matrix[0][j];

        for(int i = 0; i < n; i++) {
            if(max < matrix[i][j]) {
                max = matrix[i][j];
            }
        }
        printf("\n max[%d] = %d", j, max);
    }
}

int main(void) {
    int matrix[N][M] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    print_element_maxim_coloane(matrix, N, M);

    return 0;
}
