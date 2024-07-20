#include <stdio.h>
#include <stdbool.h>

//Exercițiu 13: Definiți o structură Produs care să conțină următoarele câmpuri: nume, categorie și preț. Inițializați un array de 5 produse și afișați informațiile acestora. Sortați produsele în funcție de preț și afișați lista sortată.

#define MAX_LEN 50
#define MAX_SIZE 5

typedef struct {
    char nume[MAX_LEN];
    char categorie[MAX_LEN];
    double pret;
} Produs;

typedef struct {
    Produs data[MAX_SIZE];
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

void insert(ArrayList* list, Produs produs) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = produs;
        list->size++;
    } else {
        printf("Lista este plină.\n");
    }
}

void printProdus(Produs produs) {
    printf("\n Nume: %s", produs.nume);
    printf("\n Categorie: %s", produs.categorie);
    printf("\n Pret: %.2f Lei", produs.pret);
    printf("\n");
}

void printList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("\n Produs %d:", i + 1);
        printProdus(list->data[i]);
    }
}

void bubbleSort(ArrayList* list) {
    for (int i = 0; i < list->size - 1; i++) {
        for (int j = 0; j < list->size - i - 1; j++) {
            if (list->data[j].pret > list->data[j + 1].pret) {
                Produs temp = list->data[j];
                list->data[j] = list->data[j + 1];
                list->data[j + 1] = temp;
            }
        }
    }
}

int main() {
    ArrayList list;
    initList(&list);

    Produs p1 = {"Xiaomi Note 12", "Electronice", 4500.0};
    Produs p2 = {"Laptop Acer", "Electronice", 13000.45};
    Produs p3 = {"Cartea Bandita de Franny Billingsley", "Cultura", 163.50};
    Produs p4 = {"Joc Uno", "Distractie", 199.99};
    Produs p5 = {"Joc Monopoly", "Distractie", 150.0};

    insert(&list, p1);
    insert(&list, p2);
    insert(&list, p3);
    insert(&list, p4);
    insert(&list, p5);

    printList(&list);

    bubbleSort(&list);

    printf("\n\n Lista produselor sorate dupa pret: \n\n");
    printList(&list);

    return 0;
}
