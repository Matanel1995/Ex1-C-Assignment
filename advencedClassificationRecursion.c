#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int Reverse(int number){
    if(number == 0){
        return 0;
    }
    else{
        int temp = number %10;
        return temp + Reverse(number/10)*10;
    }
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

int isPalindrome(int number){
    printf("The number in function is %d \n",Reverse(number));
    if(number == Reverse(number)){
        return 1;
    }
    else{
        return 0;
    }
}



