#include <stdio.h>
#include <stdbool.h>

//Exercițiu 11: Definiți o structură Carte care să conțină următoarele câmpuri: titlu, autor și pret. Inițializați un array de 3 cărți, afișați informațiile și calculați prețul total al cărților.

#define MAX_LEN 50
#define MAX_SIZE 3

typedef struct {
    char titlu[MAX_LEN];
    char autor[MAX_LEN];
    double pret;
} Carte;

typedef struct {
    Carte data[MAX_SIZE];
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

void insert(ArrayList* list, Carte carte) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = carte;
        list->size++;
    } else {
        printf("Lista este plină.\n");
    }
}

void printCarte(Carte carte) {
    printf("\n Titlu: %s", carte.titlu);
    printf("\n Autor: %s", carte.autor);
    printf("\n Pret: %.2f Lei", carte.pret);
    printf("\n");
}

void printList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("\n Carte %d:", i + 1);
        printCarte(list->data[i]);
    }
}

double calculPretTotal(ArrayList* list) {

    double total = 0;

    for (int i = 0; i < list->size; i++) {
        total += list->data[i].pret;
    }

    return total;
}

int main() {
    ArrayList list;
    initList(&list);

    Carte c1 = {"Tatuatorul de la Auschwitz", "Heather Morris", 162.50};
    Carte c2 = {"Bandita", "Franny Billingsley", 210};
    Carte c3 = {"Reaparitia lui Rachel Price", "Holly Jackson", 243.45};

    insert(&list, c1);
    insert(&list, c2);
    insert(&list, c3);

    printList(&list);

    printf("\n Pretul total al cartilor: %.2f Lei", calculPretTotal(&list));

    return 0;
}
