#include <stdio.h>
#include <stdio.h>
#include <string.h>
void selectare()
{
    char denumire[20];
    int ctrl=0;
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
    fread(&lista2, sizeof(lista2), 1, f);
    fread(&ad1, sizeof(ad1), 1, f);
    while(!feof(f))
    {
        if(strcmp(lista2.nume, denumire)==0)
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
            ctrl++;
        }
         fread(&lista2, sizeof(lista2),1,f);
         fread(&ad1, sizeof(ad1), 1, f);
    }
    printf("\n");
     fclose(f);
    if(ctrl==0)
    {
        printf("Nu exista asa medicament!\n");
    }
     printf("\n\n\n\n");
}



