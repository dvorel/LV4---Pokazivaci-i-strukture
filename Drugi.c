#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include"Struct.h"

int n = 0;
int x, y, z;
struct artikl artikli[10];
struct artikl *max;

void unos(void) {
	for (int i = 0; i < n; i++) {
		printf("\n\nIme: ");
		getch();
		scanf("%s[^\n]", artikli[i].ime);
		printf("\nCijena: ");
		scanf("%f", &artikli[i].cijena);
		printf("\nKolicina: ");
		scanf("%d", &artikli[i].kolicina);
	}
	return;
}

void najskuplji(void) {
	float m = 0;
	for (int i = 0; i < n; i++) {
		if (m < artikli[i].cijena) {
			m = artikli[i].cijena;
			max = &artikli[i];
		}
	}
	return;
}

void ispis() {
	printf("\n\nIme: %s", max->ime);
	printf("\nCijena: %.2f", max->cijena);
	printf("\nKolicina: %d", max->kolicina);
	return;
}

int main(void) {
	do {
		printf("\nBroj artikala: ");
		scanf(" %d", &n);
	} while (n>10 || n < 1);	//provjera unosa//

	unos();
	najskuplji();
	ispis();

	getch(); //pauzira program//
	return 0;
}
