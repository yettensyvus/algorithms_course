#include <stdio.h>

//Exercițiu 4: Scrie un program care citește un fișier text și numără numărul de caractere din fișier.

int citire_fisier_numara_caractere(const char *file_name) {
    FILE *file;
    char ch;
    int count = 0;

    file = fopen(file_name, "r");

    if (file == NULL) {
        perror("Eroare la deschiderea fisierului");
        return;
    }

    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    fclose(file);

    return count;
}

int main() {
    const char *file_name = "input.txt";

    printf("Numarul de caractere: %d", citire_fisier_numara_caractere(file_name));

    return 0;
}
