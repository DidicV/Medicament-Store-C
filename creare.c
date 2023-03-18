#include <stdio.h>
#include <stdlib.h>
void creare()
{
    int op;
        printf("\n");
        f=fopen("fise.txt", "a");
        printf(" Medicament: ");
        scanf("%15s", medicament.nume);
        printf(" Pretul: ");
        scanf("%f", &medicament.pret);
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
    strcpy(medicament.tara, contry);
}
    else if(op==2)
    {
    char contry[20]="USA";
    strcpy(medicament.tara, contry);
    }
    else if(op==3)
    {
        char contry[20]="Ungaria";
        strcpy(medicament.tara, contry);
    }
    else if(op==4)
    {
        char contry[20]="Franta";
        strcpy(medicament.tara, contry);
    }
    else if(op==5)
    {
        char contry[20]="Belgia";
        strcpy(medicament.tara, contry);
    }
    else if(op==6)
    {
        char contry[20]="Rusia";
        strcpy(medicament.tara, contry);
    }
    else if(op==7)
    {
        char contry[20]="Anglia";
        strcpy(medicament.tara, contry);
    }
    else if(op==8)
    {
        char contry[20]="Italia";
        strcpy(medicament.tara, contry);
    }
    else if(op==9)
    {
        char contry[20]="Spania";
        strcpy(medicament.tara, contry);
    }
    else if(op==0)
    {
        char contry[20]="Ausria";
        strcpy(medicament.tara, contry);
    }
    else{
        printf("Alegeti optiunea corecta\n");
        goto n;
    }
        printf("\nData expirarii\n");
m:
        printf(" Ziua: ");
        scanf("%d", &medicament.zi);
        printf(" Luna: ");
        scanf("%d", &medicament.luna);
        printf(" Anul: ");
        scanf("%d", &medicament.an);
    if(medicament.luna > 12 || medicament.luna < 1)
    {
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
        
    }
    if(medicament.luna==4  || medicament.luna==6 || medicament.luna==9 || medicament.luna==11 )
    {
        if(medicament.zi>30 || medicament.zi < 1)
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
    }
    
    if(medicament.luna==1 || medicament.luna==3  || medicament.luna==5 || medicament.luna==7 || medicament.luna==8 || medicament.luna==10 || medicament.luna==12  )
    {
        if(medicament.zi>31 || medicament.zi < 1)
        {
        printf("\nData nu este corecta\n");
        goto m;
        }
    }
     if((medicament.an % 4)==0 && medicament.luna==2 && medicament.zi>29)
    {
       //Bisect
            printf("\nData nu este corecta\n");
            goto m;
        
    }
      if((medicament.an % 4)!=0 && medicament.luna==2 && medicament.zi>28)
    {
       //nu e bisect
            printf("\nData nu este corecta\n");
            goto m;
    }
    printf(" ID: ");
    scanf("%d", &medicament.ID);
    printf(" Nume companie: ");
    scanf("%s", medicament.company);
    printf(" Mlgr: ");
    scanf("%d", &medicament.mlgr);
    fwrite(&medicament, sizeof(medicament), 1, f);
    fclose(f);
    printf("\n\n\n");
}





