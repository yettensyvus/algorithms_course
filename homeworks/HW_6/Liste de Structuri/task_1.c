#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LEN 50
#define MAX_SIZE 5

typedef struct {
    char nume[MAX_LEN];
    char prenume[MAX_LEN];
    unsigned int varsta;
} Student;

typedef struct {
    Student data[MAX_SIZE];
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

void insert(ArrayList* list, Student student) {
    if (list->size < MAX_SIZE) {
        list->data[list->size] = student;
        list->size++;
    } else {
        printf("Lista este plină.\n");
    }
}

void printStudent(Student student) {
    printf("\n Nume: %s", student.nume);
    printf("\n Prenume: %s", student.prenume);
    printf("\n Varsta: %d", student.varsta);
    printf("\n");
}

void printList(ArrayList* list) {
    for (int i = 0; i < list->size; i++) {
        printf("\n Student %d:", i + 1);
        printStudent(list->data[i]);
    }
}

int main() {
    ArrayList list;
    initList(&list);

    Student s1 = {"Straton", "Alex", 20};
    Student s2 = {"Alex", "Straton", 21};
    Student s3 = {"Alex", "Alex", 22};
    Student s4 = {"Straton", "Straton", 22};
    Student s5 = {"StratonAlex", "AlexStraton", 23};

    insert(&list, s1);
    insert(&list, s2);
    insert(&list, s3);
    insert(&list, s4);
    insert(&list, s5);

    printList(&list);

    return 0;
}
