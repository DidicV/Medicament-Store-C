#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort()
{
    int opt;
    printf("\n\n\n");
    printf("            _______________________________________   \n");
    printf("            |                SORTARE              |   \n");
    printf("            |    1  - Dupa pret ord. crescatoare  |   \n");
    printf("            |    2  - Dup ordine alfabetica       |   \n");
    printf("            ---------------------------------------   \n");
    printf("            ----> ");
    scanf("%d", &opt);
    if(opt == 1)
    {
    int index=-1;
    float a[n];
    int k=0, stop;
    float numar;
    f=fopen("fise.txt", "r");
    fread(&medicament, sizeof(medicament), 1, f);
    while(!feof(f))
    {
        if(medicament.pret != index)
        {
            a[k] = medicament.pret;
            k=k+1;
        }
         fread(&medicament, sizeof(medicament),1,f);
    }
    stop=k;



        
        
        
        
        
        
    int fp;
    float aux;
             do
             {
                 fp=1;
                 for(k=0; k<stop-1; k++)
                 {
                   if(a[k]>a[k+1])
                   {
                       aux = a[k];
                       a[k] = a[k+1];
                       a[k+1] = aux;
                       fp=0;
                   }
                 }
             }while(!fp);
        
        
        
        
        
        
        
        
        
        fseek(f, 0, SEEK_SET);
        printf("\n\n\n\n");
        printf(" -----------------------------------------------------------------------------------------------------------\n");
        printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
        printf(" ___________________________________________________________________________________________________________\n");

        i = 1;

        for(k=0; k<stop; k++)
        {
          fseek(f, 0, SEEK_SET);
          fread(&medicament, sizeof(medicament),1,f);
          numar=a[k];

          while(!feof(f))
          {
            if(medicament.pret == numar)
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
        }

        printf("\n\n\n\n");
        fclose(f);



    }
    else if(opt == 2)
    {
        char denumire[]="aaaaaaaoyitnbrsearba";
            int y, top;
            char str[30][30];
            char temp[20];
             
            f=fopen("fise.txt", "r");
            fread(&medicament, sizeof(medicament), 1, f);
           
            y=0;
        
            while(!feof(f))
            {
                if(strcmp(medicament.nume, denumire)!=0)
                {
                     strcpy(str[y], medicament.nume);
                     y++;
                }
                 fread(&medicament, sizeof(medicament),1,f);
        
            }
            top = y;
        
            for (int y = 0; y < top; ++y) {
                for (int j = y + 1; j < top; ++j) {
                    if (strcmp(str[y], str[j]) > 0) {
                        strcpy(temp, str[y]);
                        strcpy(str[y], str[j]);
                        strcpy(str[j], temp);
                    }
                }
            }

                 fseek(f, 0, SEEK_SET);
                 printf(" -----------------------------------------------------------------------------------------------------------\n");
                 printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
                 printf(" ___________________________________________________________________________________________________________\n");
                 i = 1;
                  for(y=0; y<top; y++)
                  {
                 fseek(f, 0, SEEK_SET);
                      fread(&medicament, sizeof(medicament),1,f);
                  
                 while(!feof(f))
                 {
                      if(strcmp(medicament.nume, str[y])==0)
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
                   }
            printf("\n\n\n\n\n\n");
            fclose(f);
        }
    else{
        printf("Optiune gresita!\n");
    }
    }


