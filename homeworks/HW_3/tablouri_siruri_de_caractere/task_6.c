//
// Created by Alexandu Straton on 17.06.2024.
//
#include <stdio.h>
#include <string.h>

int main() {
    /*
        Exercițiul 6. Scrie un program care să creeze un tablou de șiruri de caractere și să afișeze cel mai lung șir din tablou.
     */

    char arr[10][50];

    int n, max = 0, index;

    printf("n = ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%s", arr[i]);

        if(max < strlen(arr[i])) {
            max = strlen(arr[i]);
            index = i;
        }
    }

    printf("max = '%s' [%d]", arr[index], max);
}
