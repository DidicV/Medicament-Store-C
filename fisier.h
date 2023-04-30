FILE *f;
FILE *t;

struct Medicament
{
	int ID;
	char nume[15];
	char tara[20];
	int zi;
	int luna;
	int an;
	float pret;
    char company[15];
    int mlgr;
} medicament;

struct linked_list
{
    int numar;
    struct linked_list *urm;
};

typedef struct linked_list node;

node *head=NULL, *last=NULL;

int i, n, contor, option;

#include "show.c"
#include "creare.c"
#include "afisare.c"
#include "selectare.c"
#include "expirare.c"
#include "stergere.c"
#include "country.c"
#include "edit.c"
#include "sort.c"
#include "liste.c"