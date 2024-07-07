#include <stdio.h>
#include <string.h>

//   Comprimă un string folosind numărătoarea consecutivă a caracterelor.

void comprima_string(char str[]) {
    int len = strlen(str);
    char comprim[len];
    int count = 1, k = 0;

    for (int i = 0; i < len; i++) {
        if (i + 1 < len && str[i] == str[i + 1]) {
            count++;
        } else {
            comprim[k++] = str[i];
            if (count > 1) {
                k += sprintf(&comprim[k], "%d", count);
            }
            count = 1;
        }
    }

    printf("%s\n", comprim);
}

int main() {
    char str[] = "aaabbc";

    comprima_string(str);

    return 0;
}