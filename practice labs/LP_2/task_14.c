#include <stdio.h>
#include <string.h>

//   Elimină toate aparițiile unui substring specificat dintr-un string dat

void elimina_subtring(char str[], char substring[]) {
    int len_substring = strlen(substring);
    int len_str = strlen(str);
    int i, j, found;

    for (i = 0; i <= len_str - len_substring; i++) {
        found = 1;
        for (j = 0; j < len_substring; j++) {
            if (str[i + j] != substring[j]) {
                found = 0;
                break;
            }
        }

        if (found) {
            for (j = i; j <= len_str - len_substring; j++) {
                str[j] = str[j + len_substring];
            }
            len_str -= len_substring;
            i--;
        }
    }
}

int main() {
    char str1[] = "Exemplu de exemplu.";
    char str2[] = "exemplu";

    elimina_subtring(str1, str2);

    printf("%s\n", str1);

    return 0;
}