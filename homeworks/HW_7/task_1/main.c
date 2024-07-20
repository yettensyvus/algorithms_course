#include <stdio.h>

//Exercițiu 1: Scrie un program care deschide un fișier text pentru citire și afișează conținutul acestuia pe ecran.

void citire_fisier(const char *file_name) {
    FILE *file;
    char ch;

    file = fopen(file_name, "r");

    if (file == NULL) {
        perror("Eroare la deschiderea fisierului");
        return;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

int main() {
    const char *file_name = "input.txt";

    citire_fisier(file_name);

    return 0;
}
