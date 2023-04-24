#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void country()
{
    char denumire[20];
    int nr_elemente = 0;

    printf("\n");
    printf(" Indica tara: ");
    scanf("%s",denumire);

    f = fopen("fise.txt", "r");

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
        for (int i = 0; medicament.tara[i]; i++) 
        {
            medicament.tara[i] = tolower(medicament.tara[i]);
        }

        if(strstr(medicament.tara, denumire) != NULL)
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

    if(nr_elemente == 0)
    {
        printf("Nu exista medicament din aceasta tara\n");
    }

    printf("\n\n\n\n");
}
