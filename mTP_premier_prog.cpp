// Nom du projet : mTP_premier_prog
// Nom de l'auteur : Ramos de Sa
// Date de création : 09/09/2024
// Révision ou version : 
// Version du compilateur : 
// Résumé : 

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>



int main()
{
	//print
	printf("Premier programme\n");	
	printf("\nSection %s promotion %d\n", "CIEL", 2026); //ecrit : Section CIEL promotion 2026
	printf("\nLe point de fusion du mercure est de %3.f \xf8 C soit environ %.1f \xf8 C \n", -38.842, -38.842);
	printf("Total : %d \n ", printf("Premier programme\n"));
	
	//Creation Variable
	int nbCara = ("Total : %d \n ", printf("Premier programme\n"));
	printf("\nNumber of characters pinted %d" , nbCara - 1);
	
	//fonction scanf_s
	int jour=0, mois=0, annee=0;
	scanf_s("%i %i %i", &jour, &mois, &annee);
	printf("Date : %i / %i / %i \n", jour, mois, annee);
	

	//char
	char c;
	do {
		c = getchar();
	} while (c != EOF && c != '\n');
	
	char prenomSaisi[6]; //variable stockant cahine de characteres 
	char nomSaisi[10]; //variable stockant cahine de characteres 
	int ageSaisi, nbHex; //creation variable ageSaisi et nbHex
	
	printf("Entrer votre prenom: "); //input chaine de caracteres
	scanf_s("%5s", prenomSaisi, _countof(prenomSaisi));
	
	printf("Entrer votre nom: "); //input chaine de caracteres
	scanf_s("%9s", nomSaisi, _countof(nomSaisi));
	
	printf("Entrer votre age: "); //input chaine de caracteres
	scanf_s("%d", &ageSaisi); //scan variable ageSaisi
	printf("Mr. %s %s a %d ans\n", prenomSaisi, nomSaisi, ageSaisi); //print texte + variables ageSaisi, nomSaisi, prenomSaisi
	
	printf("Entrer un nombre en hexadecimal : "); //input chaine de caracteres
	scanf_s("%x", &nbHex); //scan variable nbHex
	printf("Vous avez saisi %#x (%d).\n", nbHex, nbHex); //print texte + variables nbHex une fois en hexadecimal et une autre en decimal


	
	//getch
	_getch();
	
	
	//return
	return(0);
}