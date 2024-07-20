#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 1000
#define SUCCESS 0
#define LIST_FULL 4

//Exercițiu 9: Scrie un program care citește datele despre operațiunile bancare din fișierul operatiuni.txt și le afișează pe ecran într-un format prietenos. Structura unei operatiuni bancare o aveti in LP3.

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

void proceseaza_linie(const char *linie, ListaOperatiuni *lista) {
    OperatiuneBancara operatiune;
    sscanf(linie, "%5s%10s%10s%lf", operatiune.codBanca, operatiune.codClient, operatiune.dataOperatiune, &operatiune.sumaOperatiune);
    adauga_operatiune(lista, operatiune);

}

void citeste_si_proceseaza_fisier(FILE *input_file, ListaOperatiuni *lista) {

    char linie[MAX_SIZE];

    while (fgets(linie, sizeof(linie), input_file)) {
        proceseaza_linie(linie, lista);
    }

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

    citeste_si_proceseaza_fisier(input_file, &listaOperatiuni);

    afiseaza_operatiuni(&listaOperatiuni);

    fclose(input_file);

    return 0;
}
