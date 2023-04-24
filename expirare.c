#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void expirare()
{
    time_t now = time(NULL);           // Get the current time
    struct tm *t = localtime(&now);    // Convert to local time

    int anul = t->tm_year + 1900;      // Get the year
    int luna = t->tm_mon + 1;         // Get the month
    int ziua = t->tm_mday;            // Get the day of the month


    f=fopen("fise.txt", "r");
    printf("\n\n\n");
    printf("                                    MEDICAMENTE EXPIRATE (Data curenta: %d/%d/%d)\n\n", ziua, luna, anul);
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;
    fread(&medicament, sizeof(medicament), 1, f);
    
    while(!feof(f))
    {
        if((medicament.an)<anul)
        {
            show_medicament(medicament);
        }
        else if((medicament.an)==anul)
        {
            if((medicament.luna)<luna)
            {
                show_medicament(medicament);
            }
        }
        if((medicament.luna)==luna && (medicament.an)==anul)
        {
            if((medicament.zi)<=ziua)
            {
                show_medicament(medicament);
            }
        }
        fread(&medicament, sizeof(medicament),1,f);
    }
    printf("\n");
    fclose(f);
}