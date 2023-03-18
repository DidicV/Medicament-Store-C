#include <stdio.h>
#include <stdio.h>
#include <string.h>
void expirare()
{
m:
    printf("\n Introduceti data actuala\n\n");
    printf(" Indica ziua: ");
    scanf("%d",&ziuaa);
    printf(" Indica luna: ");
    scanf("%d",&lunaa);
    printf(" Indica anul: ");
    scanf("%d",&anul);
    if(lunaa > 12 || lunaa < 1)
       {
           {
           printf("\nData nu este corecta\n");
           goto m;
           }
       }
       if(lunaa==4  || lunaa==6 || lunaa==9 || lunaa==11 )
       {
           if(medicament.zi>30)
           {
           printf("\nData nu este corecta\n");
           goto m;
           }
       }
       if(lunaa==1 || lunaa==3  || lunaa==5 || lunaa==7 || lunaa==8 || lunaa==10 || lunaa==12  )
       {
           if(ziuaa>31)
           {
           printf("\nData nu este corecta\n");
           goto m;
           }
       }
        if((anul % 4)==0 && lunaa==2 && ziuaa>29)
       {
          //Bisect
               printf("\nData nu este corecta\n");
               goto m;
       }
        else if((anul % 4)!=0 && lunaa==2 && ziuaa>28)
       {
          //nu e bisect
               printf("\nData nu este corecta\n");
               goto m;
       }
    f=fopen("fise.txt", "r");
    printf("\n\n\n");
    printf("                                    medicamentMEDICAMENTELOR EXPIRATE \n\n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;
    fread(&medicament, sizeof(medicament), 1, f);
    while(!feof(f))
    {
        if((medicament.an)<anul)
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
        else if((medicament.an)==anul)
        {
            if((medicament.luna)<lunaa)
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
        }
        if((medicament.luna)==lunaa && (medicament.an)==anul)
        {
            if((medicament.zi)<=ziuaa)
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
        }
         fread(&medicament, sizeof(medicament),1,f);
    }
    printf("\n");
     fclose(f);
}


