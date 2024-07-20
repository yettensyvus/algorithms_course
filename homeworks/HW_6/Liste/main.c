#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 10

typedef struct {
    int data[MAX_SIZE];
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

void removeLast(ArrayList* list) {
    if (!isEmpty(list)) {
        list->size--;
    } else {
        printf("Lista este goală.\n");
    }
}

void insertAt(ArrayList* list, int position, int element) {
    if (list->size >= MAX_SIZE) {
        printf("Lista este plină.\n");
    } else if (position < 0 || position > list->size) {
        printf("Poziție invalidă.\n");
    } else {
        for (int i = list->size; i > position; i--) {
            list->data[i] = list->data[i - 1];
        }
        list->data[position] = element;
        list->size++;
    }
}

void bubbleSort(ArrayList* list) {
    for (int i = 0; i < list->size - 1; i++) {
        for (int j = 0; j < list->size - i - 1; j++) {
            if (list->data[j] > list->data[j + 1]) {
                int temp = list->data[j];
                list->data[j] = list->data[j + 1];
                list->data[j + 1] = temp;
            }
        }
    }
}

void insert(ArrayList* list, int element) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = element;
        list->size++;
    } else {
        printf("Lista este plină.\n");
    }
}

void printList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("%d ", list->data[i]);
    }
    printf("\n");
}

int main() {
    ArrayList list;
    initList(&list);

    //Exercițiu 5: Scrie un program care definește o listă de numere întregi cu o capacitate fixă de 10 elemente. Inițializează lista cu primele 5 elemente și afișează elementele listei.

    insert(&list, 3);
    insert(&list, 2);
    insert(&list, 7);
    insert(&list, 1);
    insert(&list, 9);

    printf("\n 1). Lista dupa adaugare: ");

    printList(&list);

    //Exercițiu 6: Scrie un program care adaugă un element la sfârșitul unei liste de numere întregi, dacă lista nu este plină. Afișează lista înainte și după adăugare.

    if (!isFull(&list)) {
        insert(&list, 6);
    }

    printf("\n 2) Lista dupa adaugare la sfarsit: ");
    printList(&list);

    //Exercițiu 7: Scrie un program care elimină ultimul element dintr-o listă de numere întregi, dacă lista nu este goală. Afișează lista înainte și după eliminare.

    removeLast(&list);

    printf("\n 3) Lista dupa eliminare a ulrimului element: ");

    printList(&list);


    //Exercițiu 8: Scrie un program care inserează un element într-o poziție specificată într-o listă de numere întregi. Afișează lista înainte și după inserare.

    insertAt(&list, 2, 77);

    printf("\n 4) Lista dupa inserare: ");

    printList(&list);

    //Exercițiu 9: Scrie un program care sortează o listă de numere întregi în ordine crescătoare folosind algoritmul Bubble Sort. Afișează lista înainte și după sortare.

    bubbleSort(&list);

    printf("\n 5) Lista dupa sortare: ");

    printList(&list);

    return 0;
}
