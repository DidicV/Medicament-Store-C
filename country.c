#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void country()
{
    char denumire[20];
    int nr_elemente = 0;

    printf("\n");
    printf(" Indica tara: ");
    scanf("%s",denumire);

    f = fopen("fise.txt", "r");

    printf("\n\n\n");
    printf("                                        MEDICAMENTUL SELECTAT \n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;

    fread(&medicament, sizeof(medicament), 1, f);

    while(!feof(f))
    {
        // toate literele le aduce la minuscule
        for (int i = 0; medicament.tara[i]; i++) 
        {
            medicament.tara[i] = tolower(medicament.tara[i]);
        }

        if(strstr(medicament.tara, denumire) != NULL)
        {
            show_medicament(medicament);

            nr_elemente++;
        }
        fread(&medicament, sizeof(medicament),1,f);
    }

    fclose(f);

    if(nr_elemente == 0)
    {
        printf("Nu exista medicament din aceasta tara\n");
    }

    printf("\n\n\n\n");
}
