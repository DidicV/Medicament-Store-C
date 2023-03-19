#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

void expirare()
{
    time_t now = time(NULL);           // Get the current time
    struct tm *t = localtime(&now);    // Convert to local time

    int anul = t->tm_year + 1900;      // Get the year (since 1900)
    int lunaa = t->tm_mon + 1;         // Get the month (0 - 11, add 1 to get 1 - 12)
    int ziuaa = t->tm_mday;            // Get the day of the month (1 - 31)


    f=fopen("fise.txt", "r");
    printf("\n\n\n");
    printf("                                    medicamentMEDICAMENTELOR EXPIRATE \n\n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    i = 1;
    fread(&medicament, sizeof(medicament), 1, f);
    
    while(!feof(f))
    {
        if((medicament.an)<anul)
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
            medicament.mlgr);
            printf(" -----------------------------------------------------------------------------------------------------------\n");
        }
        else if((medicament.an)==anul)
        {
            if((medicament.luna)<lunaa)
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
                medicament.mlgr);
                printf(" -----------------------------------------------------------------------------------------------------------\n");
            }
        }
        if((medicament.luna)==lunaa && (medicament.an)==anul)
        {
            if((medicament.zi)<=ziuaa)
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
                medicament.mlgr);
                printf(" -----------------------------------------------------------------------------------------------------------\n");
            }
        }
        fread(&medicament, sizeof(medicament),1,f);
    }
    printf("\n");
    fclose(f);
}