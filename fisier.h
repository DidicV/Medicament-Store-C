FILE *f;
FILE *t;
struct medicament
{
char nume[15];
char tara[20];
int zi;
int luna;
int an;
float pret;
}lista1, lista2;

struct nume
{
    int ID;
    char company[15];
    int mlgr;
}ad1, ad2;

struct linked_list
{
    int numar;
    struct linked_list *urm;
};
typedef struct linked_list node;
node *head=NULL, *last=NULL;

int anul, lunaa, ziuaa, di, contor;
int day, month, year, mg;
float price;
char pays[15];
char nome[20];
char comp[15];
int i, n;

#include "creare.c"
#include "afisare.c"
#include "selectare.c"
#include "expirare.c"
#include "corectare.c"
#include "country.c"
#include "edit.c"
#include "sort.c"
#include "liste.c"


