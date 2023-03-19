#include <stdio.h>
#include <stdio.h>
#include <string.h>

void stergere()
{
    char ch;
    int j;
    i=1;
    printf("\n");
    printf("Indica randul: ");
    scanf("%d", &j);

    f=fopen("fise.txt", "r");
    t=fopen("temp.txt", "w");

    fread(&medicament, sizeof(medicament), 1, f);

    while(!feof(f))
    {
        if(j != i)
        {
            fwrite(&medicament, sizeof(medicament), 1, t);
        }
        i++;
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
        else
        {
            fputc(ch, f);
        }
    }
    printf("\n");
    printf("STERGERE CU SUCCES\n");
    fclose(t);
    fclose(f);
}
