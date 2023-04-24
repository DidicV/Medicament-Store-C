#include <stdio.h>
#include <stdio.h>
#include <string.h>

void edit()
{
    afisare();

    int j;
    // list of struct
    Medicament *medicaments = NULL;
    int index = 0;

    printf("Indica randul: ");
    scanf("%d", &j);

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

    fclose(f);

    if (j > 0 && j <= index)
    {
        f = fopen("fise.txt", "w");

        for (int i = 0; i < index; i++)
        {
            if (j-1 == i)
            {
                printf(" Nume: %s\n", medicaments[i].nume);
                printf(" Tara: %s\n", medicaments[i].tara);
                printf(" Pret: %.2f\n", medicaments[i].pret);
                printf(" Ziua: %d\n", medicaments[i].zi);
                printf(" Luna: %d\n", medicaments[i].luna);
                printf(" Anul: %d\n", medicaments[i].an);
                printf(" ID-ul: %d\n", medicaments[i].ID);
                printf(" Companie: %s\n", medicaments[i].company);
                printf(" Mlgr: %d\n", medicaments[i].mlgr);


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
                scanf("%d", &option);

                switch(option)
                {
                    case 1:
                        printf("Numele nou: ");
                        scanf("%s",medicaments[i].nume);
                        break;

                    case 2:
                        printf("Tara noua: ");
                        scanf("%s",medicaments[i].tara);
                        break;

                    case 3:
                        printf("Pretul nou: ");
                        scanf("%f", &medicaments[i].pret);
                        break;

                    case 4:
                        printf("Ziua noua: ");
                        scanf("%d",&medicaments[i].zi);
                        break;

                    case 5:
                        printf("Luna noua: ");
                        scanf("%d",&medicaments[i].luna);
                        break;

                    case 6:
                        printf("Anul nou: ");
                        scanf("%d",&medicaments[i].an);
                        break;

                    case 7:
                        printf("ID nou: ");
                        scanf("%d",&medicaments[i].ID);
                        break;

                    case 8:
                        printf("Compania noua: ");
                        scanf("%s",medicaments[i].company);
                        break;

                    case 9:
                        printf("Mlgr nou: ");
                        scanf("%d",&medicaments[i].mlgr);
                        break;

                    default:
                        printf("Nu exista asa optiune!\n");
                        break;
                }
            }
            fwrite(&medicaments[i], sizeof(medicaments[i]), 1, f);
        }

        fclose(f);
    }
    else
    {
        printf("Nu exista asa element\n");
    }
}