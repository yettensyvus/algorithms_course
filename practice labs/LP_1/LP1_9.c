#include <stdio.h>

#define SIZE 10

/*
    Exercițiul 9: Histogramă
    Creează un program care citește de la tastatură un set de note obținute de studenți și generează o histogramă care ilustrează distribuția notelor. Notele sunt valori întregi cuprinse între 1 și 10.
    Cerințe funcționale:
    Programul trebuie să înceapă prin citirea unui număr natural care indică câte note vor fi introduse. Apoi, citește notele propriu-zise de la tastatură.
    Implementează o funcție care calculeaza câte note de fiecare fel există.
    Implementează o funcție care afișează histograma notelor, folosind asteriscuri pentru a reprezenta frecvența fiecărei note.
    Exemplu de Input:
    11
    7 8 5 6 7 7 8 9 4 6 5
    Output:
    1: ---
    2: ---
    3: ---
    4: *--
    5: **-
    6: **-
    7: ***
    8: **-
    9: *--
    10: ---


 */
 
void total_note(int arr[], int n, int count[]) {
    for(int i = 0; i < n; i++) {
        if(arr[i] >= 1 && arr[i] <= 10) {
            count[arr[i] - 1]++;
        }
    }
}

void histograma(int count[]) {
    for(int i = 0; i < SIZE; i++) {
        printf("%d: ", i + 1);
        for(int j = 0; j < count[i]; j++) {
            printf("*");
        }
        for(int j = count[i]; j < SIZE; j++) {
            printf("-");
        }
        printf("\n");
    }
}

int main(void) {
    int n;
    int arr[100];
    int count[SIZE] = {0};

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    total_note(arr, n, count);
    histograma(count);

    return 0;
}
