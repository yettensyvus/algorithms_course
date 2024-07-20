#include <stdio.h>

//Exercițiu 2: Definiți o structură Carte care să conțină următoarele câmpuri: titlu, autor și anPublicare. Inițializați un obiect de tip Carte și afișați informațiile acestuia.


#define MAX_LEN 50

typedef struct Carte {
    char titlu[MAX_LEN];
    char autor[MAX_LEN];
    unsigned int anPublicare;
} Carte;

int main(void) {

    Carte c = { .titlu = "The Green Mile", .autor = "Stephen King", .anPublicare = 1996 };

    printf("\n Titlu: %s", c.titlu);
    printf("\n Autor: %s", c.autor);
    printf("\n An Publicare: %d", c.anPublicare);
}
