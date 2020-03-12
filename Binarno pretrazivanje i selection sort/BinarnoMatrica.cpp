#include <stdlib.h>
#include <iostream>


int main()
{
	int n = 9;
	int a = 6;
	int M[6][6] = { 1,2,3,4,5,6,7,2,9,1,2,3,4,5,3,7,8,9,1,2,3,4,5,6,7,8,9,1,5,3,4,5,6,7,8,6};

	int gg = a - 1, dg = 0, sv = 0;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%d\t", M[i][j]);

		}
		printf("\n");
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			sv = (dg + gg) / 2;
			if (M[i][i] == n) {
				printf("Broj je pronadjen na %d %d mjestu", i, i);
				exit(0);
				}
			if (M[i][i] > sv) {
				dg = sv + 1;
			}
			if (M[i][i] < sv) {
				gg = sv - 1;
			}
			}
		
		}
	printf("Broj nije pronadjedn");
	}



	
	


