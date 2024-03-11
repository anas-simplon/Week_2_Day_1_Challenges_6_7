#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lenght 7

int Generate_Number(){

            char letter ;
            letter = rand() % 9;

        return letter;
        }
//Inserer les element du tableaux
        void Insert_Char_Into_Position(int* tab , int pos , int number){
            tab[pos]= number;
        }

int main()
{
    int Tableau[lenght], i;
    srand(time(NULL));

            printf("Tableau De Base\n");

//Inserer les element du tableaux et affichage
        for(i=0 ; i< lenght ; i++)
            {
                Insert_Char_Into_Position(Tableau,i,Generate_Number());
                printf("%d | ",Tableau[i]);
            }


//AFFichage des nombres impairs
            printf("\n\nTableau Nombres Impairs\n");
            for(i=0 ; i< lenght ; i++)
            {
                if(Tableau[i] % 2 != 0)
                    printf("%d | ",Tableau[i]);
            }

            printf("\n");
    return 0;
}
