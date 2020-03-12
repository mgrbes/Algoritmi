#include <stdlib.h>
#include <iostream>


int main()
{
	int n = 5;
	int a = 6;
	int M[6] = { 1,6,2,7,3,4 };

	int gornjaG = a - 1, donjaG = 0, srednjaV = 0;

	for (int i = 0; i < a - 1; i++) {
		for (int j = i + 1; j < a; j++) {
			if (M[i] > M[j]) {
				int temp = M[i];
				M[i] = M[j];
				M[j] = temp;
			}
		}
	}

	for (int i = 0; i < a; i++) {
		printf("%d ", M[i]);
	}

	while (donjaG <= gornjaG) {
		srednjaV = (donjaG + gornjaG) / 2;
		if (M[srednjaV] == n) {
			printf("Broj se nalazi na %d mjestu", srednjaV+1);
			exit(0);
		}
		if (n > M[srednjaV])
			donjaG = srednjaV + 1;
		if (n < M[srednjaV])
			gornjaG = srednjaV - 1;


	}
	printf("\nBroj ne postoji");
}
	
	


