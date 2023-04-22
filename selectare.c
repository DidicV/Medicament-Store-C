#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void selectare()
{
    char denumire[20];
    int nr_elemente = 0;

    printf("\n");
    printf(" Indica denumirea: ");
    scanf("%s",denumire);

    f=fopen("fise.txt", "r");

    printf("\n\n\n");
    printf("                                        MEDICAMENTUL SELECTAT \n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;

    fread(&medicament, sizeof(medicament), 1, f);

    while(!feof(f))
    {
        // toate literele le aduce la minuscule
        for (int i = 0; medicament.nume[i]; i++) 
        {
            medicament.nume[i] = tolower(medicament.nume[i]);
        }

        if(strstr(medicament.nume, denumire) != NULL)
        {
            printf(" |%4d  | %-18s | %-14s | %-6.2f |  %-2d  %2d  %-5d|   %3d   |    %-9s |   %-4d   |\n",
            i++,
            medicament.nume,
            medicament.tara,
            medicament.pret,
            medicament.zi,
            medicament.luna,
            medicament.an,
            medicament.ID,
            medicament.company,
            medicament.mlgr);
            printf(" -----------------------------------------------------------------------------------------------------------\n");
            nr_elemente++;
        }
        fread(&medicament, sizeof(medicament),1,f);
    }

    fclose(f);

    if(nr_elemente==0)
    {
        printf("Nu exista asa medicament!\n");
    }

    printf("\n\n\n\n");
}
