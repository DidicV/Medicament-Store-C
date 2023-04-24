#include <stdio.h>
#include <stdlib.h>

void creare()
{
    int option;

    f = fopen("fise.txt", "a");

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
    scanf("%d", &option);

    if(option == 1)
    {
        strcpy(medicament.tara, "Germania");
    }
    else if(option == 2)
    {
        strcpy(medicament.tara, "USA");
    }
    else if(option == 3)
    {
        strcpy(medicament.tara, "Ungaria");
    }
    else if(option == 4)
    {
        strcpy(medicament.tara, "Franta");
    }
    else if(option == 5)
    {
        strcpy(medicament.tara, "Belgia");
    }
    else if(option == 6)
    {
        strcpy(medicament.tara, "Rusia");
    }
    else if(option == 7)
    {
        strcpy(medicament.tara, "Anglia");
    }
    else if(option == 8)
    {
        strcpy(medicament.tara, "Italia");
    }
    else if(option == 9)
    {
        strcpy(medicament.tara, "Spania");
    }
    else if(option == 0)
    {
        strcpy(medicament.tara, "Ausria");
    }
    else
    {
        printf("Alegeti optiontiunea corecta\n");
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
        printf("\nData nu este corecta\n");
        goto m;
    }

    if(medicament.luna == 4  || medicament.luna == 6 || medicament.luna == 9 || medicament.luna == 11)
    {
        if(medicament.zi > 30 || medicament.zi < 1)
        {
            printf("\nData nu este corecta\n");
            goto m;
        }
    }

    if(medicament.luna == 1 || medicament.luna == 3  || medicament.luna == 5 || medicament.luna == 7 || medicament.luna == 8 || medicament.luna == 10 || medicament.luna==12)
    {
        if(medicament.zi > 31 || medicament.zi < 1)
        {
            printf("\nData nu este corecta\n");
            goto m;
        }
    }

    if((medicament.an % 4) == 0 && medicament.luna == 2 && medicament.zi > 29)
    {
        //Bisect
        printf("\nData nu este corecta\n");
        goto m;
    }

    if((medicament.an % 4) != 0 && medicament.luna == 2 && medicament.zi > 28)
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
