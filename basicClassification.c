#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int isStrong(int number){
    int sum=0 , temp , factorialTemp =1 , numberOriginal = number;
    while(number !=0){
        temp = number %10;
        for(int i = temp ; i>0 ;i--){
            factorialTemp = (factorialTemp * i);
        }
        number = (number/10);
        sum = (sum + factorialTemp);
        factorialTemp =1;
    }
    if(sum == numberOriginal){
        return 1;
    }
    else{
        return 0;
    }
}

int isPrime(int number){
    double sqrtNumber = sqrt((double)number);
    int counter =2;
    while (counter < sqrtNumber)
    {
        if(number % counter ==0){
            return 0;
        }
        else{
            counter++;
        }
    }
    return 1;
}
