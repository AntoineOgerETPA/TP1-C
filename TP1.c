#include <stdio.h>
int attaqueM = 10;
int ptdevieM = 100;
int attaqueJ = 20;
int ptdevieJ = 100;
int i = 100;
int main()
{

int degatsM = attaqueM;
int degatsJ = attaqueJ;
for(i=100; i>=0; i--){
	if ( ptdevieJ <= 0){
			printf("MORT");
			break;
	}
	if ( ptdevieM <= 0){
			printf("GENIAL");
			break;
	}
		//Attaque du Joueur :
                printf("Le Joueur Attaque %d \n", attaqueJ);
                printf("Le Monstre a perdu %d PV \n", degatsJ);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ);
                printf("Vie du Joueur = %d \n", ptdevieJ);
    //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM);
                printf("Le Joueur a perdu %d PV \n", degatsM);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM);
