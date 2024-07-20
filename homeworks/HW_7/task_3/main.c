#include <stdio.h>

//Exercițiu 3: Scrie un program care citește un fișier text și numără numărul de linii din fișier.

int citire_fisier_numara_randuri(const char *file_name) {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen(file_name, "r");

    if (file == NULL) {
        perror("Eroare la deschiderea fisierului");
        return;
    }

    while ((ch = fgetc(file)) != EOF) {
        if(ch == '\n') {
            count++;
        }
    }

    fclose(file);

    return count;
}

int main() {
    const char *file_name = "input.txt";

    printf("Numarul de linii: %d", citire_fisier_numara_randuri(file_name));

    return 0;
}
