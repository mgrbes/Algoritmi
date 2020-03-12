
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gen_array(float V[], float dg, float gg, float n) {
	for (int i = 0; i < n; i++) {
		V[i]=(gg - dg) * ((float)rand() / RAND_MAX) + dg;
		
	}
	
}


void sort(float V[], int n) {	for (int i = 0; i < n - 1; i++) {		for (int j = i + 1; j < n; j++) {			if (V[i] > V[j]) {				float temp = V[i];				V[i] = V[j];				V[j] = temp;			}		}	}	}

int sekv_pret(float V[], int n, float x) {
	for (int i = 0; i < n; i++) {
		if (V[i] == x) {
			printf("\nBroj je pronadjen na %d mjestu", i);
			return i;
		}
		else {
			return -1;
		}
	}
}

int bin_pret(float V[], int n, float x) {
	int dg = 0, sv = 0, gg = n - 1;

	while (dg <= gg) {
		sv = (dg + gg) / 2;
		if (V[sv] == x) {
			printf("\nBroj se nalazi na %d mjestu", sv + 1);
			return 1;
		}
		if (x > V[sv]) {
			dg = sv + 1;
		}
		if (x < V[sv]) {
			gg = sv - 1;
		}
	}
	printf("\nBroj ne postoji");
}

int main()
{
	int n=100000;
	float V[100000];
	time_t t1, t2;
	gen_array(V, 5, 22, n);
	t1 = clock();
	int index=sekv_pret(V, n, 5.249550);
	printf("\t%d\t", index);
	t2 = clock();
	
	printf("Vrijeme trajanja je %dms\n", t1);
	sort(V, n);
	bin_pret(V, n, 5.249550);
}

