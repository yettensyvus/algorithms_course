#include <stdio.h>

//Exercițiu 1: Definiți o structură Student care să conțină următoarele câmpuri: nume, prenume și vârstă. Inițializați un obiect de tip Student și afișați informațiile acestuia.

#define MAX_LEN 50

typedef struct Student {
    char nume[MAX_LEN];
    char prenume[MAX_LEN];
    unsigned int varsta;
} Student;

int main(void) {

    Student s = { .nume = "Straton", .prenume = "Alex", .varsta = 20 };

    printf("\n Nume: %s", s.nume);
    printf("\n Prenume: %s", s.prenume);
    printf("\n Varsta: %d", s.varsta);
}
