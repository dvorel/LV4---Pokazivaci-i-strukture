#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include"Struct.h"

int m = 0, n = 0;
int x, y, z;
struct tocka tocke[10];		//alokacija tocaka i trokuta//
struct trokut trokuti[10];

float opseg(int x){
	float o = 0;
	float a, b, c;

	a = sqrt(pow((trokuti[x].t3->y - trokuti[x].t2->y),2)+ pow((trokuti[x].t3->x - trokuti[x].t2->x), 2));	//stranica a//
	b = sqrt(pow((trokuti[x].t3->y - trokuti[x].t1->y), 2) + pow((trokuti[x].t3->x - trokuti[x].t1->x), 2));
	c = sqrt(pow((trokuti[x].t2->y - trokuti[x].t1->y), 2) + pow((trokuti[x].t2->x - trokuti[x].t1->x), 2));
	o = a + b + c;

	return o;
}

float max_opseg(void) {
	float max = 0;
	for (int i = 0; i < n; i++) {
		if (opseg(i) > max) {
			max = opseg(i);
		}
	}
	return max;
}

int main(void) {
	do {
		printf("\nBroj tocaka: ");
		scanf(" %d", &m);
		printf("\nBroj trokuta: ");
		scanf(" %d", &n);
	} while (m > 10 || m < 1 || n>10 || n < 1);	//provjera unosa//

	for (int i = 0; i < m; i++) {
		printf("\nUnesi x i y za %d tocku: ", i + 1);
		scanf("%f%f", &tocke[i].x, &tocke[i].y);
	}

	for (int i = 0; i < n; i++){
		printf("\nUnesi tri tocke: ");
		scanf("%d%d%d", &x, &y, &z);

		trokuti[i].t1 = &tocke[x-1];
		trokuti[i].t2 = &tocke[y-1];
		trokuti[i].t3 = &tocke[z-1];
	}

	printf("%.2f\n", max_opseg());

	getch(); //pauzira program//
	return 0;
}
