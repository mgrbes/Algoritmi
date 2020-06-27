#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> 
#include<stdlib.h> 
#include <time.h>
#include <math.h>

int prostBroj(int num) {
    int prosti = 0;
    
    
        for (int i = 2;i < num/2;i++) {
            if (num % i == 0) {
                printf("%d nije prost\n", num);
                break;
            }
            else {
                printf("%d je prost\n", num);
                prosti++;
                break;
            }

            
       
    }
    return prosti;
}

int main()
{
    int arr[] = { 100, 200, 31, 13, 97, 10, 20, 11 };
    //calculate length of the array
    int len = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0;i < len;i++) {
        prostBroj(arr[i]);
    }





}