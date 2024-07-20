#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 512
#define MAX_LINES 1024

//Exercițiu 8: Scrie un program care citește un fișier text linie cu linie și afișează liniile într-o ordine inversă în alt fișier.

void inverseaza_linie(const char *input_file_name, const char *output_file_name) {
    FILE *input_file, *output_file;

    char linii[MAX_LINES][MAX_LINE_LENGTH];
    char linie[MAX_LINE_LENGTH];

    int num_linii = 0;


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


    while (fgets(linie, MAX_LINE_LENGTH, input_file) != NULL) {
        strcpy(linii[num_linii], linie);
        num_linii++;
    }


    for (int i = num_linii - 1; i >= 0; i--) {
        fprintf(output_file, "%s", linii[i]);
    }

    fclose(input_file);
    fclose(output_file);

}

int main() {
    const char *input_file_name = "input.txt";
    const char *output_file_name = "output.txt";

    inverseaza_linie(input_file_name, output_file_name);

    return 0;
}
