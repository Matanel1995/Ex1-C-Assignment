#include <stdio.h>
#include "NumClass.h"
#define True 1
#define False 0


int main(){
    int a , b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("The Armstrong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if(isArmstrong(i) == True)
            printf(" %d" ,i);
    }
    printf("\nThe Palindromes numbers are:");
    for (int i = a; i <= b; i++)
    {
        if(isPalindrome(i) == True)
            printf(" %d" ,i);
    }
    printf("\nThe Prime numbers are:");
    for (int i = a; i <= b; i++)
    {
        if(isPrime(i) == True)
            printf(" %d" ,i);
    }
    printf("\nThe Strong numbers are:");
    for (int i = a; i <= b; i++)
    {
        if(isStrong(i) == True)
            printf(" %d" ,i);
    }
    return 0;
    printf("\n");
}