#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 1024
#define LINE_SIZE 512

// 7: Scrie un program care citește un fișier text și înlocuiește toate aparițiile unui cuvânt specificat cu alt cuvânt, salvând rezultatul într-un nou fișier.

void inlocuire_si_copiere_fisier(const char *input_file_name, const char *output_file_name, const char *cuvant_vechi, const char *cuvant_nou) {
    FILE *input_file, *output_file;
    char linie[LINE_SIZE];
    char buffer[BUFFER_SIZE];
    char *pozitie, *start;

    input_file = fopen(input_file_name, "r");
    if (input_file == NULL) {
        perror("Eroare la deschiderea fisierului input");
        return;
    }

    output_file = fopen(output_file_name, "w");
    if (output_file == NULL) {
        perror("Eroare la deschiderea fisierului output");
        return;
    }

    while (fgets(linie, sizeof(linie), input_file) != NULL) {
        buffer[0] = '\0';
        start = linie;

        while ((pozitie = strstr(start, cuvant_vechi)) != NULL) {
            strncat(buffer, start, pozitie - start); //linia inainte de cuvantul vechi se adauga in buffer
            strcat(buffer, cuvant_nou); // cuvantul nou se adauga in buffer
            start = pozitie + strlen(cuvant_vechi); //modifica strat dupa cuvantul vechi
        }

        strcat(buffer, start); //adauga partea de linie ramasa in buffer
        fputs(buffer, output_file); //scrie in fisierul output
    }


    fclose(input_file);
    fclose(output_file);

}

int main() {
    const char *input_file_name = "input.txt";
    const char *output_file_name = "output.txt";

    const char *cuvant_vechi = "King";
    const char *cuvant_nou = "Alex";

    inlocuire_si_copiere_fisier(input_file_name, output_file_name, cuvant_vechi, cuvant_nou);

    return 0;
}
