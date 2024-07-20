
#include <stdio.h>
#include <string.h>


#define MAX_SIZE 1000 // Definim o dimensiune maximă a listei
#define SUCCESS 0
#define POSITION_INIT 1
#define INVALID_POSITION 2
#define POSITION_EMPTY 3
#define LIST_FULL 4


// strcuctura prin care definim elementul listei
typedef struct {
   char codBanca[6];
   char codClient[11];
   char dataOperatiune[11];
   double sumaOperatiune;
} OperatiuneBancara;


typedef struct ListaOperatiuni {
  OperatiuneBancara operatiuni[MAX_SIZE];
  int size; // numarul de operatiuni
} ListaOperatiuni;


// functie de initializare
void initializeaza_lista_operatiuni(ListaOperatiuni *lista){
   lista->size = 0; // lista este goala
}


// functie de adaugare in lista
int adauga_operatiune(ListaOperatiuni *lista, OperatiuneBancara operatiuneNoua){
   if(lista->size < MAX_SIZE){
       lista->operatiuni[lista->size] = operatiuneNoua;
       lista->size++;
       return SUCCESS;
   } else {
       return LIST_FULL; // cod 4 - lista este plina!
   }
}

int sterge_ultima_operatiune(ListaOperatiuni *lista) {
    if(lista->size != 0) {
        lista->size--;
        return SUCCESS;
    }
    else {
        return INVALID_POSITION;
    }
}


void afiseaza_operatiuni_client(ListaOperatiuni *lista, char codClient[]) {
    for(int i = 0; i < lista->size; i++) {
        if(!strcmp(lista->operatiuni[i].codClient, codClient)) {
            printf("Nr.%d, Cod banca: %s, Client: %s, Data: %s, Suma: %.3f\n",
             i+1,
             lista->operatiuni[i].codBanca,
             lista->operatiuni[i].codClient,
             lista->operatiuni[i].dataOperatiune,
             lista->operatiuni[i].sumaOperatiune
             );
        }
    }
}

int convert_data_in_int(char date[]) {
    int zi, luna, an;
    sscanf(date, "%d-%d-%d", &zi, &luna, &an);
    return an * 10000 + luna * 100 + zi;
}

void afiseaza_suma_operatiuni_client_perioada(ListaOperatiuni *lista, char codClient[], char dataStart[], char dataEnd[]) {

    float suma = 0;
    int start = convert_data_in_int(dataStart);
    int end = convert_data_in_int(dataEnd);

    for(int i = 0; i < lista->size; i++) {
        if(!strcmp(lista->operatiuni[i].codClient, codClient)) {
            int current_date = convert_data_in_int(lista->operatiuni[i].dataOperatiune);
            if(current_date >= start && current_date <= end) {
                suma += lista->operatiuni[i].sumaOperatiune;
            }
        }
    }

    printf("Suma operatiunilor: %.2f\n", suma);
}


void sortare_operatiuni_dupa_suma(ListaOperatiuni *lista) {

    OperatiuneBancara temp;

    for (int i = 0; i < lista->size - 1; i++) {
        for(int j = 0; j < lista->size - i - 1; j++) {
            if (lista->operatiuni[j].sumaOperatiune < lista->operatiuni[j + 1].sumaOperatiune) {
                temp = lista->operatiuni[j];
                lista->operatiuni[j] = lista->operatiuni[j + 1];
                lista->operatiuni[j + 1] = temp;
            }
        }
    }
}

// functie de afisare a operatiunuilor
void afiseaza_operatiuni(ListaOperatiuni *lista){
   if(lista->size == 0){
       printf("Lista este goala! Nu exista nicio operatiune bancara.");
       return;
   }


   for(int i = 0;  i < lista->size; i++){
       printf("Nr.%d, Cod banca: %s, Client: %s, Data: %s, Suma: %.3f\n",
              i+1,
              lista->operatiuni[i].codBanca,
              lista->operatiuni[i].codClient,
              lista->operatiuni[i].dataOperatiune,
              lista->operatiuni[i].sumaOperatiune
              );
   }
   printf("\n");
}



int main(){
   ListaOperatiuni listaOperatiuni;
   initializeaza_lista_operatiuni(&listaOperatiuni);


   OperatiuneBancara primaOperatiune;
   strcpy(primaOperatiune.codBanca, "00001");
   strcpy(primaOperatiune.codClient, "0000000002");
   strcpy(primaOperatiune.dataOperatiune, "25-01-2023");
   primaOperatiune.sumaOperatiune = 114.123;



   OperatiuneBancara adouaOperatiune = {
           .codBanca = "00001",
           .codClient = "0000000002",
           .dataOperatiune = "15-01-2023",
           .sumaOperatiune = 19965.123
   };

    OperatiuneBancara atreaiaOperatiune = {
        .codBanca = "00001",
        .codClient = "0000000002",
        .dataOperatiune = "27-01-2023",
        .sumaOperatiune = 1662.123
};

    OperatiuneBancara apatraOperatiune = {
        .codBanca = "00001",
        .codClient = "0000000002",
        .dataOperatiune = "10-01-2023",
        .sumaOperatiune = 1662.123
};


    adauga_operatiune(&listaOperatiuni, primaOperatiune);
    adauga_operatiune(&listaOperatiuni, adouaOperatiune);
    adauga_operatiune(&listaOperatiuni, atreaiaOperatiune);
    adauga_operatiune(&listaOperatiuni, apatraOperatiune);

    //afiseaza_operatiuni_client(&listaOperatiuni, "0000000002");


    printf("ne sortat: \n ");

    afiseaza_operatiuni(&listaOperatiuni);

    printf("sortat: \n ");
    sortare_operatiuni_dupa_suma(&listaOperatiuni);
    afiseaza_operatiuni(&listaOperatiuni);

    afiseaza_suma_operatiuni_client_perioada(&listaOperatiuni, "0000000002", "01-01-2023", "01-02-2023");

   return 0;
}
