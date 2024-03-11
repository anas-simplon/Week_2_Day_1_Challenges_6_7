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
//Trie du tableaux par selection
        void Trier(int* tab)
        {
            int i,j,k,permut;
                for(i = 0 ; i< lenght-1 ; i++)
                {
                    printf("\n\n Etape %d\n",i+1);
                    for( j =i+1; j < lenght ; j++)
                       {
                           if(tab[i] <tab[j])
                                {
                                    permut = tab[i];
                                    tab[i] = tab[j];
                                    tab[j] = permut ;
                                }
                          printf("%d | ",tab[j]);

                       }
                       printf("\n");
                       for(k=0 ; k< lenght; k++)
                            printf("%d | ",tab[k]);
                }
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
//Trier le tableaux
            Trier(Tableau);

//AFFichage du tableau trier
            printf("\n\nTableau Trie\n");
            for(i=0 ; i< lenght ; i++)
            {
                printf("%d | ",Tableau[i]);
            }

            printf("\n");
    return 0;
}
