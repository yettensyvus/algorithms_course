#include <stdio.h>
#include <ctype.h>

//Exercițiu 5: Scrie un program care citește un fișier text și numără numărul de cuvinte din fișier.

int citire_fisier_numara_cuvinte(const char *file_name) {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen(file_name, "r");

    if (file == NULL) {
        perror("Eroare la deschiderea fisierului");
        return -1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch) && ch != '\n') {
            count++;
        }
    }

    if (count > 0) {
        count++;
    }

    fclose(file);

    return count;
}

int main() {
    const char *file_name = "input.txt";


    printf("Numarul de cuvinte: %d\n", citire_fisier_numara_cuvinte(file_name));


    return 0;
}
