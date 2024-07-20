#include <stdio.h>

//Exercițiu 2: Scrie un program care deschide un fișier text pentru scriere și scrie un mesaj specificat în fișier.

void scriere_fisier(const char *file_name, const char *message) {
    FILE *file;

    file = fopen(file_name, "w");

    if (file == NULL) {
        perror("Eroare la deschiderea fișierului");
        return;
    }
    else {
        printf("Fisierul s a deschis cu succes!");
    }

    fprintf(file, "%s", message);

    fclose(file);
}

int main() {
    const char *file_name = "output.txt";
    const char *message = "Numele meu este Alexandru.";

    scriere_fisier(file_name, message);

    return 0;
}
