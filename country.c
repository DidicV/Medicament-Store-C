#include <stdio.h>
#include <stdio.h>
#include <string.h>
void country()
{
    char denumire[20];
    printf("Indica tara: ");
    scanf("%s",denumire);
    f=fopen("/Users/didicvictor/Documents/fise.txt", "r");
    printf("\n\n\n");
    printf("                                       MEDICAMENTUL SELECTAT \n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;
    
    fread(&lista2, sizeof(lista2), 1, f);
    fread(&ad1, sizeof(ad1), 1, f);
    
    while(!feof(f))
    {
        if(strcmp(lista2.tara, denumire)==0)
        {
printf(" |%4d  | %-18s | %-14s | %-6.2f |  %-2d  %2d  %-5d|   %3d   |    %-9s |   %-4d   |\n",
                            i++,
                            lista2.nume,
                            lista2.tara,
                            lista2.pret,
                            lista2.zi,
                            lista2.luna,
                            lista2.an,
                            ad1.ID,
                            ad1.company,
                            ad1.mlgr
                            );
    printf(" -----------------------------------------------------------------------------------------------------------\n");

        }
         fread(&lista2, sizeof(lista2),1,f);
         fread(&ad1, sizeof(ad1), 1, f);
    }
    printf("\n\n\n");
     fclose(f);
}



