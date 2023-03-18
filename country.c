#include <stdio.h>
#include <stdio.h>
#include <string.h>
void country()
{
    char denumire[20];
    printf("Indica tara: ");
    scanf("%s",denumire);
    f=fopen("fise.txt", "r");
    printf("\n\n\n");
    printf("                                       MEDICAMENTUL SELECTAT \n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;
    
    fread(&medicament, sizeof(medicament), 1, f);
    
    while(!feof(f))
    {
        if(strcmp(medicament.tara, denumire)==0)
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
                            medicament.mlgr
                            );
    printf(" -----------------------------------------------------------------------------------------------------------\n");

        }
         fread(&medicament, sizeof(medicament),1,f);
    }
    printf("\n\n\n");
     fclose(f);
}



