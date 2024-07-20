#include <stdio.h>
#include <stdbool.h>

//Exercițiu 12: Definiți o structură Angajat care să conțină următoarele câmpuri: nume, pozitie și salariu. Inițializați un array de 3 angajați și afișați informațiile acestora. Calculați salariul total.

#define MAX_LEN 50
#define MAX_SIZE 3

typedef struct {
    char nume[MAX_LEN];
    char pozitie[MAX_LEN];
    double salariu;
} Angajat;

typedef struct {
    Angajat data[MAX_SIZE];
    int size;
} ArrayList;

void initList(ArrayList* list) {
    list->size = 0;
}

bool isEmpty(ArrayList* list) {
    return list->size == 0;
}

bool isFull(ArrayList* list) {
    return list->size == MAX_SIZE;
}

void insert(ArrayList* list, Angajat angajat) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = angajat;
        list->size++;
    } else {
        printf("Lista este plină.\n");
    }
}

void printAngajat(Angajat angajat) {
    printf("\n Nume: %s", angajat.nume);
    printf("\n Pozitie: %s", angajat.pozitie);
    printf("\n Salariu: %.2f Lei", angajat.salariu);
    printf("\n");
}

void printList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("\n Angajat %d:", i + 1);
        printAngajat(list->data[i]);
    }
}

double calculSalariuTotal(ArrayList* list) {

    double salariuTotal = 0.0;

    for (int i = 0; i < list->size; i++) {
        salariuTotal += list->data[i].salariu;
    }

    return salariuTotal;
}

int main() {
    ArrayList list;
    initList(&list);

    Angajat a1 = {"Straton Alex", "Developer", 12000};
    Angajat a2 = {"Alex Straton", "Front End", 8750.50};
    Angajat a3 = {"Alex Alex", "Back End", 9700};

    insert(&list, a1);
    insert(&list, a2);
    insert(&list, a3);

    printList(&list);

    printf("\n Salariul total al angajatilor: %.2f Lei", calculSalariuTotal(&list));

    return 0;
}
