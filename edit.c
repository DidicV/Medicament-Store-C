#include <stdio.h>
#include <stdio.h>
#include <string.h>
void edit()
{
    printf("\n\n");
    char denumire[20], ch;
    int ctrl=0;
r:
    printf("Indica denumirea: ");
    scanf("%s",denumire);
    f=fopen("fise.txt", "r");
    fread(&medicament, sizeof(medicament), 1, f);
    
    while(!feof(f))
    {
        if(strcmp(medicament.nume, denumire)==0)
        {
            day = medicament.zi;
            month = medicament.luna;
            year = medicament.an;
            price = medicament.pret;
            strcpy(nome, medicament.nume);
            strcpy(pays, medicament.tara);
            di = medicament.ID;
            strcpy(comp, medicament.company);
            mg = medicament.mlgr;
            
            ctrl++;
        }
         fread(&medicament, sizeof(medicament),1,f);
    }
    fclose(f);
    switch (ctrl)
    {
        case 0: printf("\nNu exista asa medicament!\n\n");
            goto r;
            
        case 1:
            goto e;
    }
e:
    f=fopen("fise.txt", "r");
    t=fopen("temp.txt", "w");
    
    fread(&medicament, sizeof(medicament), 1, f);
    while(!feof(f))
    {
        if(strcmp(medicament.nume, denumire)!=0)
        {
            
          fwrite(&medicament, sizeof(medicament), 1, t);
        }
        
         fread(&medicament, sizeof(medicament),1,f);
    }
    printf("\n");
    fclose(t);
     fclose(f);

    f=fopen("fise.txt", "w");
    t=fopen("temp.txt", "r");
    
       while(1)
       {
           ch=fgetc(t);
           if(ch==EOF)
           {
               break;
           }
           else{
            fputc(ch, f);
           }
       }
       printf("\n");
       fclose(t);
       fclose(f);
    
    printf(" Nume: %s\n", nome);
    printf(" Tara: %s\n", pays);
    printf(" Pret: %.2f\n", price);
    printf(" Ziua: %d\n", day);
    printf(" Luna: %d\n", month);
    printf(" Anul: %d\n", year);
    printf(" ID-ul: %d\n", di);
    printf(" Companie: %s\n", comp);
    printf(" Mlgr: %d\n", mg);
    
    printf("\n");
    
    f=fopen("fise.txt", "a");
    int option;
    
    printf("       _______________________________      \n");
    printf("       |  ALEGE ELEMTUL CORECTARII   |      \n");
    printf("       |  1  - Numele                |      \n");
    printf("       |  2  - Producator(tara)      |      \n");
    printf("       |  3  - Pretul                |      \n");
    printf("       |  4  - Ziua                  |      \n");
    printf("       |  5  - Luna                  |      \n");
    printf("       |  6  - Anul                  |      \n");
    printf("       |  7  - ID-ul                 |      \n");
    printf("       |  8  - Compania              |      \n");
    printf("       |  9  - Mlgr / Mllr           |      \n");
    printf("       -------------------------------      \n");
    printf("        ----> ");
    scanf("%d", &option);  fflush(stdin);
    
    char numele[20];
    float pretul;
    int index;
    
    if(option == 1)
    {
    printf("Introdu numele corect: ");
    scanf("%s", numele);
    strcpy(medicament.nume, numele);
    strcpy(medicament.tara, pays);
    medicament.zi = day;
    medicament.luna = month;
    medicament.an = year;
    medicament.pret = price;
    medicament.ID = di;
    strcpy(medicament.company, comp);
    medicament.mlgr = mg;
    }
    
    else if(option == 2)
    {
    printf("Introdu tara corecta: ");
    scanf("%s", numele);
    strcpy(medicament.nume, nome);
    strcpy(medicament.tara, numele);
    medicament.zi = day;
    medicament.luna = month;
    medicament.an = year;
    medicament.pret = price;
    medicament.ID = di;
    strcpy(medicament.company, comp);
    medicament.mlgr = mg;
    }
    
    else if(option == 3)
    {
    printf("Introdu pretul corect: ");
    scanf("%f", &pretul);
    strcpy(medicament.nume, nome);
    strcpy(medicament.tara, pays);
    medicament.zi = day;
    medicament.luna = month;
    medicament.an = year;
    medicament.pret = pretul;
    medicament.ID = di;
    strcpy(medicament.company, comp);
    medicament.mlgr = mg;
    }
    
    else if(option == 4)
    {
    printf("Introdu ziua corecta: ");
    scanf("%d", &index);
    strcpy(medicament.nume, nome);
    strcpy(medicament.tara, pays);
    medicament.zi = index;
    medicament.luna = month;
    medicament.an = year;
    medicament.pret = price;
    medicament.ID = di;
    strcpy(medicament.company, comp);
    medicament.mlgr = mg;
    }
    
    else if(option == 5)
    {
    printf("Introdu luna corecta: ");
    scanf("%d", &index);
    strcpy(medicament.nume, nome);
    strcpy(medicament.tara, pays);
    medicament.zi = day;
    medicament.luna = index;
    medicament.an = year;
    medicament.pret = price;
    medicament.ID = di;
    strcpy(medicament.company, comp);
    medicament.mlgr = mg;
    }
    
    else if(option == 6)
       {
       printf("Introdu anul corect: ");
       scanf("%d", &index);
       strcpy(medicament.nume, nome);
       strcpy(medicament.tara, pays);
       medicament.zi = day;
       medicament.luna = month;
       medicament.an = index;
       medicament.pret = price;
       medicament.ID = di;
       strcpy(medicament.company, comp);
       medicament.mlgr = mg;
       }
    
    else if(option == 7)
       {
       printf("Introdu ID-ul corect: ");
       scanf("%d", &index);
       strcpy(medicament.nume, nome);
       strcpy(medicament.tara, pays);
       medicament.zi = day;
       medicament.luna = month;
       medicament.an = year;
       medicament.pret = price;
       medicament.ID = index;
       strcpy(medicament.company, comp);
       medicament.mlgr = mg;
       }
    
    if(option == 8)
    {
    printf("Introdu compania corecta: ");
    scanf("%s", numele);
    strcpy(medicament.nume, nome);
    strcpy(medicament.tara, pays);
    medicament.zi = day;
    medicament.luna = month;
    medicament.an = year;
    medicament.pret = price;
    medicament.ID = di;
    strcpy(medicament.company, numele);
    medicament.mlgr = mg;
    }
    
    else if(option == 9)
       {
       printf("Introdu masa Mlgr corect: ");
       scanf("%d", &index);
       strcpy(medicament.nume, nome);
       strcpy(medicament.tara, pays);
       medicament.zi = day;
       medicament.luna = month;
       medicament.an = index;
       medicament.pret = price;
       medicament.ID = di;
       strcpy(medicament.company, comp);
       medicament.mlgr = index;
       }
    
    fwrite(&medicament, sizeof(medicament), 1, f);
    fwrite(&medicament, sizeof(medicament), 1, f);
    
    printf("\n\n\n\n\n");
    fclose(f);
}

