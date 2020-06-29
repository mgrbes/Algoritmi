#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct oe_ {
	int x;
	struct oe_ *slijedeci;
};
typedef struct oe_ oe;



oe* krajnjiElementiMatrice(int m, int n, int a[][5]) {//spiralni nacin krajnjih elemenata matrice
	int broj = 0;
	oe* p = NULL;
	oe* t1 = NULL;
	oe* novi=NULL;
	
	int xmin = 0, ymin = 0, xmax = 5-1 , ymax = 5-1 ;
	while (broj<4*4) {
		for (int i = xmin;i < ymax;) {
			novi = (oe*)malloc(sizeof(oe));
			novi->x = a[xmin][i++];
			novi->slijedeci = p;
			p = novi;
			
			broj++;
		}

		for (int i = xmin;i < ymax;) {
			novi = (oe*)malloc(sizeof(oe));
			novi->x = a[i++][ymax];
			novi->slijedeci = p;
			p = novi;
			
			broj++;
		}
		for (int i = ymax;i > ymin;) {
			novi = (oe*)malloc(sizeof(oe));
			novi->x = a[ymax][i--];
			novi->slijedeci = p;
			p = novi;
			
			broj++;
		}
		for (int i = xmax;i > xmin;) {
			novi = (oe*)malloc(sizeof(oe));
			novi->x = a[i--][xmin];
			novi->slijedeci = p;
			p = novi;
			
			broj++;
		}
	}
	
	return p;
}

int ispisListe(oe* glava) {
	oe* p = glava;
	if (p == NULL)
		return 0;
	ispisListe(p->slijedeci);
	printf("%d ", p->x);

}

void laksiNacin(int m, int n, int a[][5]) {
	oe* p = NULL, *novi = NULL, *t = NULL;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				novi = (oe*)malloc(sizeof(oe));
				novi->x = a[i][j];
				novi->slijedeci = p;
				p = novi;
				printf("%d ", novi->x);
			}
		}
	}
}

int main() {
	int a[5][5];
	oe* glava = NULL;
	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			a[i][j] = rand() % 10;
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	glava=krajnjiElementiMatrice(5, 5,a);
	//laksiNacin(3, 3, a);
	ispisListe(glava);
}