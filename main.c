#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fisier.h"

int main()
{
    int option;

    while(1)
    {   
        printf("            _________________________________________________________      \n");
        printf("            |                       M E N U                         |      \n");
        printf("            |_______________________________________________________|      \n");
        printf("            |         1  - Adauga medicament                        |      \n");
        printf("            |         2  - Afisarea listei                          |      \n");
        printf("            |         3  - Afisarea selectiva                       |      \n");
        printf("            |         4  - Afisare medicamente expirate             |      \n");
        printf("            |         5  - Stergerea selectata                      |      \n");
        printf("            |         6  - Medicamente din tara selectata           |      \n");
        printf("            |         7  - Corectarea medicamentului                |      \n");
        printf("            |         8  - Sortarea medicamentelor                  |      \n");
        printf("            |         9  - Liste si noduri                          |      \n");
        printf("            |         0  - Iesire din program                       |      \n");
        printf("            ---------------------------------------------------------      \n");
        printf("            |--->  ");
        scanf("%d", &option);

        switch(option)
        {
            case 1: 
                creare(); 
                break;
                
            case 2: 
                afisare(); 
                break;

            case 3: 
                selectare(); 
                break;

            case 4: 
                expirare(); 
                break;

            case 5: 
                corectare(); 
                break;

            case 6: 
                country(); 
                break;

            case 7: 
                edit(); 
                break;

            case 8: 
                sort();
                break;

            case 9: 
                listenod();break;

            case 0: 
                exit(0);
                break;
                
            default: printf("Alegeti optiunea corecta\n"); break;
        }
    }

    return 0;
}