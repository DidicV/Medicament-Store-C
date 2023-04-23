#include "stdio.h"

void show_tabel()
{
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
}

void show_medicament(struct Medicament medicaments)
{
    printf(" |%4d  | %-18s | %-14s | %-6.2f |  %-2d  %2d  %-5d|   %3d   |    %-9s |   %-4d   |\n",
    i++,
    medicaments.nume,
    medicaments.tara,
    medicaments.pret,
    medicaments.zi,
    medicaments.luna,
    medicaments.an,
    medicaments.ID,
    medicaments.company,
    medicaments.mlgr);
    printf(" -----------------------------------------------------------------------------------------------------------\n");
}