#include <stdio.h>
#include <stdlib.h>
void creare()
{
    int op;
        printf("\n");
        f=fopen("/Users/didicvictor/Documents/fise.txt", "a");
        printf(" Medicament: ");
        scanf("%15s", lista1.nume);
        fflush(stdin);  //Curata informatia din stdin
        printf(" Pretul: ");
        scanf("%f", &lista1.pret);
n:
      printf("       ___________________________   \n");
      printf("       |       SELECTATI TARA    |   \n");
      printf("       |    1  - Germania        |   \n");
      printf("       |    2  - USA             |   \n");
      printf("       |    3  - Ungaria         |   \n");
      printf("       |    4  - Franta          |   \n");
      printf("       |    5  - Belgia          |   \n");
      printf("       |    6  - Rusia           |   \n");
      printf("       |    7  - Anglia          |   \n");
      printf("       |    8  - Italia          |   \n");
      printf("       |    9  - Spania          |   \n");
      printf("       |    0  - Austia          |   \n");
      printf("       ---------------------------   \n");
      printf("        ----> ");
      scanf("%d", &op);
    
if(op == 1)
{
    char contry[20]="Germania";
    strcpy(lista1.tara, contry);
}
    else if(op==2)
    {
    char contry[20]="USA";
    strcpy(lista1.tara, contry);
    }
    else if(op==3)
    {
        char contry[20]="Ungaria";
        strcpy(lista1.tara, contry);
    }
    else if(op==4)
    {
        char contry[20]="Franta";
        strcpy(lista1.tara, contry);
    }
    else if(op==5)
    {
        char contry[20]="Belgia";
        strcpy(lista1.tara, contry);
    }
    else if(op==6)
    {
        char contry[20]="Rusia";
        strcpy(lista1.tara, contry);
    }
    else if(op==7)
    {
        char contry[20]="Anglia";
        strcpy(lista1.tara, contry);
    }
    else if(op==8)
    {
        char contry[20]="Italia";
        strcpy(lista1.tara, contry);
    }
    else if(op==9)
    {
        char contry[20]="Spania";
        strcpy(lista1.tara, contry);
    }
    else if(op==0)
    {
        char contry[20]="Ausria";
        strcpy(lista1.tara, contry);
    }
    else{
        printf("Alegeti optiunea corecta\n");
        goto n;
    }
        printf("\nData expirarii\n");
m:
        printf(" Ziua: ");
        scanf("%d", &lista1.zi);
        printf(" Luna: ");
        scanf("%d", &lista1.luna);
        printf(" Anul: ");
        scanf("%d", &lista1.an);
    if(lista1.luna > 12 || lista1.luna < 1)
    {
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
        
    }
    if(lista1.luna==4  || lista1.luna==6 || lista1.luna==9 || lista1.luna==11 )
    {
        if(lista1.zi>30 || lista1.zi < 1)
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
    }
    
    if(lista1.luna==1 || lista1.luna==3  || lista1.luna==5 || lista1.luna==7 || lista1.luna==8 || lista1.luna==10 || lista1.luna==12  )
    {
        if(lista1.zi>31 || lista1.zi < 1)
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
    }
     if((lista1.an % 4)==0 && lista1.luna==2 && lista1.zi>29)
    {
       //Bisect
            printf("\nData nu este corecta\n");
            goto m;
        
    }
      if((lista1.an % 4)!=0 && lista1.luna==2 && lista1.zi>28)
    {
       //nu e bisect
            printf("\nData nu este corecta\n");
            goto m;
    }
    printf(" ID: ");
    scanf("%d", &ad1.ID);
    printf(" Nume companie: ");
    scanf("%s", ad1.company);
    printf(" Mlgr: ");
    scanf("%d", &ad1.mlgr);
    fwrite(&lista1, sizeof(lista1), 1, f);
    fwrite(&ad1, sizeof(ad1), 1, f);
    fclose(f);
    printf("\n\n\n");
}





