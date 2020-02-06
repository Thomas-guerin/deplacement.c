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

typedef struct chapitre chapitre;

	int main() 
{
	chapitre chapitre1 = {"Initiation",5,+20,{2,3,4}};
	chapitre chapitre2 = {"Lataverne",-5,2,{3,4,5}};
	chapitre chapitre3 = {"Larencontre",20,+5,{4,5,6}};
printf("%s\n",chapitre1);
printf("Bonjour aventurier , vous voici dans l'Initiation, choisissez votre destination . Voulez vous aller vers Bordemer ou Vertpré ?\n");
printf("Tapez 1 pour Bordemer ou 2 pour Vertpré\n");
scanf("%d" ,%choix); 
	if ( choix==1)
	{
		printf("Bienvenu a Bordemer ! \n");
	}
	else if ( choix==2 )
	{
		printf("Bienvenu a Vertpré ! \n");
	}



	


