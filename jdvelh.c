#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// choix joueur 
	int choix
	
	struct chapitre {

		char description;
		int or;
		int soin;
		int tabchap[10];
};
int tab[10] = {0,1,2,3,4,5,6,7,8,9}
typedef struct chapitre chapitre;

	int main() 
{

	chapitre chapitre1 = {"Initiation",5,+20,{1,2,3,4,5,6,7,8,9}};
	chapitre chapitre2 = {"Lataverne",-5,2,{0,2,3,4,5,6,7,8,9}};
	chapitre chapitre3 = {"Larencontre",20,+5,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre4 = {"Laquete",1,+5,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre5 = {"Ledonjon",0,+10,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre6 = {"Lehall",5,-10,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre7 = {"Lagranddragon",30,-25,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre8 = {"Lesgoblins",10,-5,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre9 = {"Letrésor",200,+5,{0,1,3,4,5,6,7,8,9}};
	chapitre chapitre10 = {"Laprincesse",20,+15,{0,1,3,4,5,6,7,8,9}};
	
printf("%s\n",chapitre1);
printf("Bonjour aventurier , vous voici dans l'Initiation, choisissez votre destination . Voulez vous aller vers Bordemer ou Vertpré ?\n");
printf("Tapez 1 pour Bordemer ou 2 pour Vertpré\n");
scanf("%d" ,%choix); 
	if ( choix==1)
	{
		printf("Bienvenu a Bordemer ! \n");
		printf("Vous êtes au %s, vous avez %d or ; votre niveau de vie : %d , acces chapitres : %d \n",chapitre 2 );
	}
	else if ( choix==2 )
	{
		printf("Bienvenu a Vertpré ! \n");
		printf("Vous êtes au %s, vous avez %d or ; votre niveau de vie : %d , acces chapitres : %d \n",chapitre 2 );
	}

printf


