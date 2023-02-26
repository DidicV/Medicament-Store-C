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
    fread(&lista2, sizeof(lista2), 1, f);
    fread(&ad2, sizeof(ad2),1,f);
    
    while(!feof(f))
    {
        if(strcmp(lista2.nume, denumire)==0)
        {
            day = lista2.zi;
            month = lista2.luna;
            year = lista2.an;
            price = lista2.pret;
            strcpy(nome, lista2.nume);
            strcpy(pays, lista2.tara);
            di = ad2.ID;
            strcpy(comp, ad2.company);
            mg = ad2.mlgr;
            
            ctrl++;
        }
         fread(&lista2, sizeof(lista2),1,f);
         fread(&ad2, sizeof(ad2),1,f);
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
    
    fread(&lista2, sizeof(lista2), 1, f);
    fread(&ad2, sizeof(ad2),1,f);
    while(!feof(f))
    {
        if(strcmp(lista2.nume, denumire)!=0)
        {
            
          fwrite(&lista2, sizeof(lista2), 1, t);
          fwrite(&ad2, sizeof(ad2), 1, t);
        }
        
         fread(&lista2, sizeof(lista2),1,f);
         fread(&ad2, sizeof(ad2),1,f);
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
    strcpy(lista1.nume, numele);
    strcpy(lista1.tara, pays);
    lista1.zi = day;
    lista1.luna = month;
    lista1.an = year;
    lista1.pret = price;
    ad1.ID = di;
    strcpy(ad1.company, comp);
    ad1.mlgr = mg;
    }
    
    else if(option == 2)
    {
    printf("Introdu tara corecta: ");
    scanf("%s", numele);
    strcpy(lista1.nume, nome);
    strcpy(lista1.tara, numele);
    lista1.zi = day;
    lista1.luna = month;
    lista1.an = year;
    lista1.pret = price;
    ad1.ID = di;
    strcpy(ad1.company, comp);
    ad1.mlgr = mg;
    }
    
    else if(option == 3)
    {
    printf("Introdu pretul corect: ");
    scanf("%f", &pretul);
    strcpy(lista1.nume, nome);
    strcpy(lista1.tara, pays);
    lista1.zi = day;
    lista1.luna = month;
    lista1.an = year;
    lista1.pret = pretul;
    ad1.ID = di;
    strcpy(ad1.company, comp);
    ad1.mlgr = mg;
    }
    
    else if(option == 4)
    {
    printf("Introdu ziua corecta: ");
    scanf("%d", &index);
    strcpy(lista1.nume, nome);
    strcpy(lista1.tara, pays);
    lista1.zi = index;
    lista1.luna = month;
    lista1.an = year;
    lista1.pret = price;
    ad1.ID = di;
    strcpy(ad1.company, comp);
    ad1.mlgr = mg;
    }
    
    else if(option == 5)
    {
    printf("Introdu luna corecta: ");
    scanf("%d", &index);
    strcpy(lista1.nume, nome);
    strcpy(lista1.tara, pays);
    lista1.zi = day;
    lista1.luna = index;
    lista1.an = year;
    lista1.pret = price;
    ad1.ID = di;
    strcpy(ad1.company, comp);
    ad1.mlgr = mg;
    }
    
    else if(option == 6)
       {
       printf("Introdu anul corect: ");
       scanf("%d", &index);
       strcpy(lista1.nume, nome);
       strcpy(lista1.tara, pays);
       lista1.zi = day;
       lista1.luna = month;
       lista1.an = index;
       lista1.pret = price;
       ad1.ID = di;
       strcpy(ad1.company, comp);
       ad1.mlgr = mg;
       }
    
    else if(option == 7)
       {
       printf("Introdu ID-ul corect: ");
       scanf("%d", &index);
       strcpy(lista1.nume, nome);
       strcpy(lista1.tara, pays);
       lista1.zi = day;
       lista1.luna = month;
       lista1.an = year;
       lista1.pret = price;
       ad1.ID = index;
       strcpy(ad1.company, comp);
       ad1.mlgr = mg;
       }
    
    if(option == 8)
    {
    printf("Introdu compania corecta: ");
    scanf("%s", numele);
    strcpy(lista1.nume, nome);
    strcpy(lista1.tara, pays);
    lista1.zi = day;
    lista1.luna = month;
    lista1.an = year;
    lista1.pret = price;
    ad1.ID = di;
    strcpy(ad1.company, numele);
    ad1.mlgr = mg;
    }
    
    else if(option == 9)
       {
       printf("Introdu masa Mlgr corect: ");
       scanf("%d", &index);
       strcpy(lista1.nume, nome);
       strcpy(lista1.tara, pays);
       lista1.zi = day;
       lista1.luna = month;
       lista1.an = index;
       lista1.pret = price;
       ad1.ID = di;
       strcpy(ad1.company, comp);
       ad1.mlgr = index;
       }
    
    fwrite(&lista1, sizeof(lista1), 1, f);
    fwrite(&ad1, sizeof(ad1), 1, f);
    
    printf("\n\n\n\n\n");
    fclose(f);
}

