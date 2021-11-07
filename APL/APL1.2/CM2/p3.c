/* Inclusions */
#include <stdio.h>
#include <stdlib.h>
#include "ma_sqrt.h"


/* Fonction : Demande à l'utilisateur de choisir 
 * quel racine il veut calculer. 
 * Ecrit dans un fichier le résultat
 * Retour : Aucun. */
void racineCalc (char* file) {
	/* Variables nécéssaires pour la racine */
	double a, res;
	int base, n;
	int test = 1;
	/* On ouvre le fichier en append afin d'y ajouter
	 * des résultats */
	FILE* flux = fopen("resultat.dat", "r");

	while ((a > 0) || !(base < 0) || !(n < 0)){
		res = 0;
		while (test) {
			/* Lit dans le fichier */
			test = fread(a, sizeof(double),1,flux);
			test = fread(res, sizeof(double),1,flux);

			printf("Racine carree de %lf = %0.15lf\n", a, res);
		}

	}
	/* On ferme le fichier une fois l'écriture terminée */
	fclose(clux);
}


int main(int argc, char *argv[]) {

	/* On vérifie le nombre d'argument (min : 2) */
	if (argc > 1) {

		/* On appelle la fonction qui va demander
		 * à l'utilisateur de choisir ses valeurs 
		 * puis remplit la valeur à calculer et
		  * le résulta dans un fichier */
		racineCalc();
	}
	else {
		fprintf(stderr, "%d : Erreur, besoin d'un argument.", argv[0]);
		exit(1);
	}
	


	return EXIT_SUCCESS;
}