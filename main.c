#include <stdio.h>
#include <stdlib.h>
#include "etat.h"
#include "reapro.h"
#include "retrait.h"


    int main()
    {
    int stock,choix;
    

    printf("quelle est le stock disponible pour aujourdhui \n");
    printf("ne ferme pas le programee completement sinon tu perd tout le boulot ok\n");
    scanf("%d",&stock);
    do
    {
    printf("--------systeme de gestion de stock-------\n");
    printf("1.  consulter l'etat des  stock\n");
    printf("2.  enregistrer un reapprovisionnement\n");
    printf("3.  enregistrer un retrait\n");
    printf("4.  fin de journee tu veux fermer le programme\n");
    printf("\nalors tu choisis quoi \n");
     
    scanf("%d",&choix);
     
     switch(choix)
     {
     case 1:
     etat(stock);
     break;
     case 2:
     stock=reapro(stock);
     printf("le nouveau stock est %d\n",stock);
     break;
     case 3:
     stock=retrait(stock);
     printf("retrait enregistree avec succes \n");
     break;
     case 4:
     printf("bye\n");
     break;
     }  
}while(choix != 4);
     return 0;
     }