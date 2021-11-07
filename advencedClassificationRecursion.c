#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int length(int n){
    int tmp = n;
    int count = 0;
    while(tmp > 0){
        count++;
        tmp = tmp / 10;
    }
    return count;
}

int palindromeRecursive(int numbers[],int start , int end){
    if(start >= end){
        return 1;
    }
    if(numbers[start] != numbers[end]){
        return 0;
    }else{
        return palindromeRecursive(numbers , start + 1 , end - 1);
    }
    
}

int isPalindrome(int n){
    int count = length(n);
    int numbers[count];
    for(int i = 0; i < count; i++){
        numbers[i] = n % 10;
        n /= 10;
    }
    int q =  palindromeRecursive(numbers , 0 , count - 1);
    if(q == 1){
        return 1;
    }
    return 0;
}
int isArmstrongRec (int number , int power){
    if(number == 0){
        return 0;
    }
    else{
        int temp = number%10;
        return isArmstrongRec(number/10 ,power) + pow(temp, power);
    }
}

int isArmstrong(int number){
    int temp = number , counter=0;
    while ((temp !=0))
    {
        counter++;
        temp = temp/10;
    }
    temp =  number;
    if(number == isArmstrongRec(number,counter)){
        return 1;
    }
    else{
        return 0;
    }
}



