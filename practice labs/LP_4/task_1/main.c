#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1000
#define SUCCESS 0
#define LIST_FULL 4

typedef struct {
    char codBanca[6];
    char codClient[11];
    char dataOperatiune[11];
    double sumaOperatiune;
} OperatiuneBancara;

typedef struct {
    OperatiuneBancara operatiuni[MAX_SIZE];
    int size;
} ListaOperatiuni;

void initializeaza_lista_operatiuni(ListaOperatiuni *lista) {
    lista->size = 0;
}

int adauga_operatiune(ListaOperatiuni *lista, OperatiuneBancara operatiuneNoua) {
    if (lista->size < MAX_SIZE) {
        lista->operatiuni[lista->size++] = operatiuneNoua;
        return SUCCESS;
    } else {
        return LIST_FULL;
    }
}

void afiseaza_operatiuni(const ListaOperatiuni *lista) {
    if (lista->size == 0) {
        printf("Lista este goala! Nu exista nicio operatiune bancara.\n");
        return;
    }

    for (int i = 0; i < lista->size; i++) {
        printf("Nr.%d, Cod banca: %s, Client: %s, Data: %s, Suma: %.3f\n",
               i + 1,
               lista->operatiuni[i].codBanca,
               lista->operatiuni[i].codClient,
               lista->operatiuni[i].dataOperatiune,
               lista->operatiuni[i].sumaOperatiune);
    }
    printf("\n");
}

void scriere_fisier(const OperatiuneBancara *operatiune, FILE *output_file) {
    fprintf(output_file, "%s %s %.3f\n",
            operatiune->codBanca,
            operatiune->codClient,
            operatiune->sumaOperatiune);
}

void adauga_operatiune_temp(ListaOperatiuni *lista, FILE *output_file, OperatiuneBancara *temp, double *suma) {
    if (*suma > 0) {
        strcpy(temp->codClient, "9999999999");
        strcpy(temp->dataOperatiune, "");
        temp->sumaOperatiune = *suma;
        adauga_operatiune(lista, *temp);
        scriere_fisier(temp, output_file);
    }
}

void proceseaza_linie(const char *linie, ListaOperatiuni *lista, FILE *output_file, OperatiuneBancara *temp, double *suma) {
    OperatiuneBancara operatiune;

    sscanf(linie, "%5s%10s%10s%lf", operatiune.codBanca, operatiune.codClient, operatiune.dataOperatiune, &operatiune.sumaOperatiune);

    if (strcmp(operatiune.codBanca, temp->codBanca) != 0) {
        adauga_operatiune_temp(lista, output_file, temp, suma);
        strcpy(temp->codBanca, operatiune.codBanca);
        *suma = 0;
    }

    *suma += operatiune.sumaOperatiune;

    adauga_operatiune(lista, operatiune);

    scriere_fisier(&operatiune, output_file);
}

void citeste_si_proceseaza_fisier(FILE *input_file, ListaOperatiuni *lista, FILE *output_file) {

    char linie[MAX_SIZE];
    double suma = 0;

    OperatiuneBancara temp = {"", "", "", 0};

    while (fgets(linie, sizeof(linie), input_file)) {
        proceseaza_linie(linie, lista, output_file, &temp, &suma);
    }

    adauga_operatiune_temp(lista, output_file, &temp, &suma);
}

FILE *deschide_fisier(const char *nume_fisier, const char *mode) {
    FILE *file = fopen(nume_fisier, mode);

    if (file == NULL) {
        perror("Eroare la deschiderea fisierului");
        exit(1000);
    }

    return file;
}

int main(void) {
    ListaOperatiuni listaOperatiuni;
    initializeaza_lista_operatiuni(&listaOperatiuni);

    FILE *input_file = deschide_fisier("operatiuni.txt", "r");
    FILE *output_file = deschide_fisier("operatiuni_out.txt", "w");

    citeste_si_proceseaza_fisier(input_file, &listaOperatiuni, output_file);

    afiseaza_operatiuni(&listaOperatiuni);

    fclose(input_file);
    fclose(output_file);

    return 0;
}
