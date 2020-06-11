#include <stdio.h>
#include <stdlib.h>

struct oe_ {
    int x;
    struct oe_* sljedeci;
};
typedef struct oe_ oe;
oe* prvi = NULL;

int main() {
    int A[5][5];
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            A[i][j] = rand() % 10;
        }
    }
    //ispis matrice
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            printf("%d ", A[i][j]);
        }printf("\n");
    }

    oe* novi=   NULL, * t;
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            novi = (oe*)malloc(sizeof(oe));
            novi->x = A[i][j];
            novi->sljedeci = prvi;
            prvi = novi;
            printf("%d ", novi->x);
            
        }
    }
    //ispis povezane liste


}