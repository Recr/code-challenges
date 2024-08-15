#include <stdio.h>

int main(){
    int primesNumber = 500;
    int startingNumber = 3;

    while (primesNumber > 0){
        int isPrime = 1;
        int divisor = 2;
        while (divisor <= startingNumber/2){
            if(startingNumber % divisor == 0){
                isPrime = 0;
                break;
            }
            divisor++;
        }
        if(isPrime == 1){
            printf("%i\n", startingNumber);
            primesNumber--;
        }
        startingNumber ++;
    }

}