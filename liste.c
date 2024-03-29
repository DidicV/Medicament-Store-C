#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void adsfarsit(int value)
{
    node *temp_node;
    temp_node = (node *) malloc(sizeof(node));
    temp_node->numar=value;
    temp_node->urm=NULL;

    if(head == NULL)
    {
        head = temp_node;
        last = temp_node;
    }
    else
    {
        last->urm = temp_node;
        last = temp_node;
    }
}

void crearelista()
{
    int value, i, n;
    printf("Indica nr de noduri: ");
    scanf("%d",&n);

    for(i=0; i < n; i++)
    {
        p:
        printf("Nodul %d -> ",i+1);
        scanf("%d",&value);

        if(value > contor)
        {
            printf("Valoarea nu exista in lista!\n");
            goto p;
        }
        adsfarsit(value);
    }
}

void adinceput(int value)
{
    node *temp_node = (node *) malloc(sizeof(node));
    temp_node->numar = value;
    temp_node->urm = head;
    head = temp_node;
}

void addupa(int key, int value)
{
    node *myNode = head;
    int flag = 0;

    while(myNode!=NULL)
    {
        if(myNode->numar == key)
        {
            node *newNode = (node *) malloc(sizeof(node));
            newNode->numar = value;
            newNode->urm = myNode->urm;
            myNode->urm = newNode;
            printf("%d este introdus dupa %d\n", value, key);
            flag = 1;
            break;
        }
        else
        myNode = myNode->urm;
    }

    if(flag == 0)
    {
        printf("Elementul nu a fost gasit!\n");
    }
}

void stergenumar(int value)
{
    node *myNode = head, *previous=NULL;
    int flag = 0;
    q:

    printf("\nIntroduceti nodul pe care doriti sa-l stergeti: ");
    scanf("%d", &value);

    if(value > contor)
    {
        printf("Valoarea nu exista in lista!\n");
        goto q;
    }

    while(myNode != NULL)
    {
        if(myNode->numar == value)
        {
            if(previous == NULL)
            {
                head = myNode->urm;
            }
            else
            {
                previous->urm = myNode->urm;
                printf("Nodul %d a fost sters din lista\n", value);
                flag = 1;
                free(myNode); //need to free up the memory to prevent memory leak
                break;
            }
        }
        previous = myNode;
        myNode = myNode->urm;
    }

    if(flag == 0)
    {
        printf("Nodul nu a fost gasit!\n");
    }
}

void afisarelista()
{
    int medicament_list[100];
    int y = 0;
    int n;
    node *myList;
    myList = head;

    while(myList!=NULL)
    {
        medicament_list[y] = myList->numar;
        myList = myList->urm;
        y++;
    }

    n = y;
    printf("\n\n\n");

    f=fopen("fise.txt", "r");
    printf("                                      LISTA MEDICAMENTELOR \n");
    printf(" -----------------------------------------------------------------------------------------------------------\n");
    printf(" |  Nr  |     Medicament     |   Producator   |  Pret  |    Expira     |    ID   |   Compania   | Mlgm / Ml|\n");
    printf(" ___________________________________________________________________________________________________________\n");
    for(y=0; y<n; y++)
    {
        i = 1;
        fseek(f, 0, SEEK_SET);
        fread(&medicament, sizeof(medicament), 1, f);

        while(!feof(f))
        {
            if(medicament_list[y] == i)
            {
                show_medicament(medicament);
            }
            i++;
            fread(&medicament, sizeof(medicament),1,f);
        }
    }

    fclose(f);
}

void listenod()
{
    show_tabel();
    i = 1;

    f = fopen("fise.txt", "r");
    fread(&medicament, sizeof(medicament), 1, f);
    while(!feof(f))
    {
        show_medicament(medicament);
        fread(&medicament, sizeof(medicament),1,f);
    }
    contor = i-1;
    fclose(f);

    int key, value, x;
    bool quit = true;
    
    while(quit)
    {
        printf("\n\n");
        printf("          _______________________________   \n");
        printf("          |        LISTE SI NODURI      |   \n");
        printf("          |    1  - Creare lista        |   \n");
        printf("          |    2  - Afisare lista       |   \n");
        printf("          |    3  - Adaugare la inceput |   \n");
        printf("          |    4  - Adaugare la sfarsit |   \n");
        printf("          |    5  - Adaugare in mijloc  |   \n");
        printf("          |    6  - Sterge nod          |   \n");
        printf("          |    0  - Iesire              |   \n");
        printf("          -------------------------------   \n");
        printf("          ----> ");
        scanf("%d",&x);
        switch (x)
        {
            case 1:
                crearelista();
            break;

            case 2:
                afisarelista();
            break;

            case 3:
                o:
                printf("Nod inceput: ");
                scanf("%d", &value);

                if(value > contor)
                {
                    printf("Valoarea nu exista in lista!\n");
                    goto o;
                }
                adinceput(value);

            break;

            case 4:
                u:
                printf("Nod sfarsit: ");
                scanf("%d", &value);

                if(value>contor)
                {
                    printf("Valoarea nu exista in lista!\n");
                    goto u;
                }
                adsfarsit(value);

            break;


            case 5:
                printf("\nNodul dupa care doriti sa introduceti alt nod: ");
                scanf("%d", &key);

                printf("\nIntroduceti un nod dupa %d:  ", key);
                scanf("%d", &value);

                addupa(key, value);
            break;

            case 6:
                stergenumar(value);
            break;

            case 0: 
                quit = false;
            break;

            default: 
                printf("Alegeti optiunea corecta\n"); 
            break;
        }
    }
}