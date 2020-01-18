#include <stdio.h>
int attaqueM = 10;
int ptdevieM = 100;
int attaqueJ = 20;
int ptdevieJ = 100;
int i = 100;
int choixj = 0;
int PM = 20;
int degatsMana = 5;


int rand_a_b(int a, int b){
			return rand()%(b-a) +a;
}
int main()
{

	int degatsM = attaqueM;
	int degatsJ = attaqueJ;
	int a = 1;
  int b = 3;
  int choixM = rand(1, 3);

for(i=100; i>=0; i--){
	if ( ptdevieJ <= 0){
			printf("MORT");
			break;
	}
	if ( ptdevieM <= 0){
			printf("GENIAL");
			break;
	}
if ( PM <=0){
	printf("Tu n'a plus de Mana");
	printf("1 = Attaque ; 2 = Défence \n");
	scanf("%d", &choixj);
}
	printf("1 = Attaque ; 2 = Défence \n");
	        scanf("%d", &choixj);

					if( choixj == 1){
        if ( choixM == 1){
            //Attaque du Joueur :
                printf("Le Joueur Attaque %d \n", attaqueJ);
                printf("Le Monstre a perdu %d PV \n", degatsJ);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ);
                printf("Vie du Joueur = %d \n", ptdevieJ);
            //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM);
                printf("Le Joueur a perdu %d PV \n", degatsM);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM);
            }
            else if( choixM == 2);{
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
            //Attaque du Joueur :
                printf("Le Joueur Attaque %d \n", attaqueJ/4);
                printf("Le Monstre a perdu %d PV \n", degatsJ/4);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ/4);
                printf("Vie du Joueur = %d \n", ptdevieJ);
            }
        }
				if( choixj == 2){
            if ( choixM == 1){
            //Défence du Joueur :
                printf("Le joueur se protege \n");
            //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM/4);
                printf("Le Joueur a perdu %d PV \n", degatsM/4);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM/4);
            }
            else if( choixM == 2);{
            //Défence du Joueur :
                printf("Le joueur se protege \n");
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
            }
        }
				if( choixj == 3){
            if ( choixM == 1){
            //Defence du Monstre :
                printf("Le Monstre se protege \n");
            //Joueur lance un sort :
                printf("Vie de Joueur = %d \n", ptdevieJ);
                printf("Joueur lance un sort ! %d \n", attaqueJ -= degatsMana);
                printf("Mana utiliser = -4 PM \n");
                printf("Le Monstre a perdu %d PV \n", degatsJ -= degatsMana);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ -= degatsMana);
                printf("Mana du Joueur = %d \n", PM -= degatsMana);
            }
            else if( choixM == 2);{
            //Joueur lance un sort :
                printf("Vie de Joueur = %d \n", ptdevieJ);
                printf("Joueur lance un sort ! %d \n", attaqueJ -= degatsMana);
                printf("Mana utiliser = -4 PM \n");
                printf("Le Monstre a perdu %d PV \n", degatsJ -= degatsMana);
                printf("Vie du Monstre %d \n", ptdevieM -= degatsJ -= degatsMana);
                printf("Mana du Joueur = %d \n", PM -= degatsMana);
            //Attaque du Monstre :
                printf("Attaque du Monstre %d \n", attaqueM);
                printf("Le Joueur a perdu %d PV \n", degatsM);
                printf("Vie du Joueur %d \n", ptdevieJ -= degatsM);
            }
        }
			}
	}
