#include <stdio.h>
#include "NumClass.h"
int isArmstrong(int number){
    int tempNumber = number, sum =0 , counter=0;
    while ((number != 0))
    {
        counter++;
        number =number/10;
    }
    number = tempNumber;
    while(number != 0){
        int temp = number %10;
        sum =sum +(temp * temp * temp);
        number =number /10;
    }
    if(sum == tempNumber){
        return 1;
    }
    else{
        return 0;
    }
}

int isPalindrome(int number){
    int tempNumber = number , temp =0;
    while (number !=0)
    {
        temp = temp*10;
        temp =temp + (number%10);
        number = number/10;
    }
    if(temp == tempNumber){
        return 1;
    }
    else{
        return 0;
    }
}
