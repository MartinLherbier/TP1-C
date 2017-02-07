#include <stdio.h>
#include <stdlib.h>

#define NCHIF 8	// Nombre de positions
#define NCHIF 8	// Nombre de positions
#define NPOS 5 	// Nombre de chiffre dans le nombre
#define NCMAX 12	 // Nombre de coups max

void tirage(int []) ;		// Contenu du tirage PC
int entr�e(int []) ;		// Lecture des chiffres du joueur

int main() {

	int tir[NPOS] ;		// Combinaison tir�e par le PC 	// tir = nom tableau
	int prop[NPOS]	// Combinaison propos�e par le joueur
	int nbcoups ; 		// Compteur de coups jou�s
	int bpos ; 		// Nombre de chiffres bien positionn�s
	int mpos ;		// Nombre de chiffres mal potisionn�s

	/*Initialisation*/
	srand(time(NULL)) ;
	tirage(tir) ;		//Passage par adresse car nom tableau = adresse

	/*Jeu*/
	do {
		while ( !entr�e(prop)) ;
	} while (nbcoups < NCMAX && bpos<NPOS) ;


}

void tirage(int t[]) {
	int i ;
	for (i=0 ; i<NPOS ; i++)
		t[i] = 1+rand()/(RAND_MAX +1)*NCHIF =1;
}
