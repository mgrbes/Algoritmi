#include <stdio.h>
#include <stdlib.h>

int hexadecimal(int n) {
    if (n <= 0)return 0;
    hexadecimal(n / 16);
    if (n % 16 < 10) {
        printf("%d", n % 16);
    }
    if (n % 16 == 10)printf("A");
    if (n % 16 == 11)printf("B");
    if (n % 16 == 12)printf("C");
    if (n % 16 == 13)printf("D");
    if (n % 16 == 14)printf("E");
    if (n % 16 == 15)printf("F");
    //hexadecimal(n / 16);
}



int main() {
    hexadecimal(394);

}