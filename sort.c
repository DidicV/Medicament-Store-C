#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sort()
{

    printf("\n\n\n");
    printf("            _______________________________________   \n");
    printf("            |                SORTARE              |   \n");
    printf("            |    1  - Dupa pret ord. crescatoare  |   \n");
    printf("            |    2  - Dupa ordine alfabetica      |   \n");
    printf("            ---------------------------------------   \n");
    printf("            ----> ");
    scanf("%d", &option);

    // list of struct
    Medicament *medicaments = NULL;
    int index = 0;

    f=fopen("fise.txt", "r");
    fread(&medicament, sizeof(medicament), 1, f);
    
    while(!feof(f))
    {
        // Append to the list
        index++;
        medicaments = (Medicament *)realloc(medicaments, index * sizeof(Medicament));
        medicaments[index - 1] = medicament;

        fread(&medicament, sizeof(medicament),1,f);
    }

    struct Medicament temp;

    switch(option)
    {
        case 1:

            // BUBBLE SORT
            int fp;
            do
            {
                fp = 1;

                for(i=0; i<index-1; i++)
                {
                    if(medicaments[i].pret > medicaments[i+1].pret)
                    {
                        temp = medicaments[i];
                        medicaments[i] = medicaments[i+1];
                        medicaments[i+1] = temp;

                        fp=0;
                    }
                }
            }while(!fp);

        break;

        default:

            // SELECTION SORT
            // prima lite din medicament o face minuscula
            // pentru ca la sortare caracterele mici si mari difera
            for (int i = 0; i < index; ++i)
            {
                medicaments[i].nume[0] = tolower(medicaments[i].nume[0]);
            }

            for (int i = 0; i < index; i++) 
            {
                for (int j = i + 1; j < index; j++) 
                {
                    if (strcmp(medicaments[i].nume, medicaments[j].nume) > 0) 
                    {
                        temp = medicaments[i];
                        medicaments[i] = medicaments[j];
                        medicaments[j] = temp;
                    }
                }
            }

        break;
    }

    i = 1;
    show_tabel();

    for (int j = 0; j < index; j++)
    {
        show_medicament(medicaments[j]);
    }

    // Free the memory used by the list
    free(medicaments);
}