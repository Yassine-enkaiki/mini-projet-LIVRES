#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
 {
int n=100;
int c=0; // compteur
char titre[20][n];
char auteur[20][n];
float prix[n];
int quantite[n];
char trouvertitre[30];
int trouver=0;
int nvquantite=0;
int somme=0;
int choix;
do{
                 printf("--------------------------------\n");

            printf("1-Ajouter un livre au stock.\n");
            printf("--------------------------------\n");

            printf("2-Afficher tous les livres disponibles.\n");
            printf("--------------------------------\n");

            printf("3-Rechercher un livre par son titre.\n");
            printf("--------------------------------\n");

            printf("4-Mettre a jour la quantite d'un livre.\n");
            printf("--------------------------------\n");

            printf("5-Supprimer un livre du stock.\n");
            printf("--------------------------------\n");

            printf("6-Afficher le nombre total de livres en stock.\n");
            printf("--------------------------------\n");



           printf("donner votre choix : ");

           scanf("%d",&choix);
        switch (choix) {
        case 1:
            printf("1-Ajouter un livre au stock.\n");

            printf("Donner le titre du livre :\n");
            scanf("%s",&titre[c]);

            printf("Donner l'auteur du livre : \n");
            scanf("%s",&auteur[c]);


            printf("Donner le prix du livre :\n");
            scanf("%f",&prix[c]);



            printf("Donner le quantite du livre :\n");
            scanf("%d",&quantite[c]);
            printf("Le livre a ajoute avec succes.\n");
c++;

            break;
        case 2:
            printf("-- Les livres disponibles --\n");


           for (int i=0;i<c;i++)

           printf("titre : %s | auteur : %s | prix : %.2f | quantite : %d\n", titre[i], auteur[i], prix[i], quantite[i]);

            break;
        case 3:
             printf("Donner le titre du livre : \n");
                scanf("%s", &trouvertitre);
                for(int i=0; i<c; i++){
                    if(strcmp(titre[i], &trouvertitre) == 0){
                            trouver =1;
                           printf("\t--- Votre livre est existant ---\n titre : %s | auteur : %s | prix : %.2f | quantite : %d\n", titre[i], auteur[i], prix[i], quantite[i]);

                      break;
                    }
                }
                if(trouver == 0){
                    printf("le livre est introuvable.\n");
                }
                trouver =0;
                      break;
        case 4:
            printf("Donner le titre du livre a modifier : \n");
                scanf("%s", &trouvertitre);
                for(int i=0; i<c; i++){
                    if(strcmp(titre[i], &trouvertitre) == 0)
                        {
                        printf("Donner la nouvelle quantite : \n");
                        scanf("%d", &nvquantite);
                        quantite[i] = nvquantite;
                        printf("---- La nouvelle quantite du %s est %d : ----\n",&trouvertitre,quantite[i]);
                        trouver = 1;
                        break;
                        }
                }

                if(trouver == 0){
                    printf("le livre est introuvable.\n");
                }
                trouver = 0;
                break;

        case 5:
            printf("--Supprimer un livre du stock--\n");
         printf("Donner le titre du livre a supprimer  : \n");
                scanf("%s", &trouvertitre);
                for(int i=0; i<c; i++){
                    if(strcmp(titre[i], trouvertitre) == 0)
                        {
                        for(int j=i; j<c; j++)
                        {
                            strcpy(titre[j],titre[j+1]);
                        }
                        trouver = 1;
                        c--;
                        printf("le livre a ete supprimer.\n");
                        break;
                    }
                }
                if(trouver == 0){
                    printf("le livre est introuvable! \n");
                }
                trouver = 0;
                break;
        case 6:
            printf("--Afficher le nombre total de livres en stock--\n");

               for(int i=0; i<c; i++)
                {
                        somme += quantite[i];
                }

            printf("le nombre total de livres en stock est : %d \n", somme);
                break;

    }
}while(choix !=0);
    return 0;

 }
