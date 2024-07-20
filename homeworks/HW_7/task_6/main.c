#include <stdio.h>
#include <ctype.h>

//Exercițiu 6: Scrie un program care copiază conținutul unui fișier text într-un alt fișier text.

void copiere_fisier(const char *input_file_name, const char *output_file_name) {
    FILE *input_file, *output_file;
    char ch;

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

    while ((ch = fgetc(input_file)) != EOF) {
        fputc(ch, output_file);
    }

    fclose(input_file);
    fclose(output_file);

}

int main() {
    const char *input_file_name = "input.txt";
    const char *output_file_name = "output.txt";

    copiere_fisier(input_file_name, output_file_name);


    return 0;
}
