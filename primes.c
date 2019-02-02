#include <stdio.h>

int isPrime(unsigned int test) {
    unsigned int i;
    
    // check to see if the value is prime
    for(i = 2; i <= test / 2; ++i) {
        if(test % i == 0) {
	    return 0;
        }// if
    }// for

    return 1;
}// isPrime

int main(int argc, char *argv[]) {
    
    unsigned int argLength = argc, i, test;
    
    // iterate through each cmd line argument passed in
    for(i = 1; i < argLength; i++) {
        // convert the char array into an int value
        sscanf(argv[i], "%d", &test);
        
        printf("%d cmd arg %d", test, i);
        
        // check to see if the value is prime
        if(isPrime(test)) {
            printf("\n%d is a Prime\n", test);
        } else {
            printf("\n%d is not a Prime!\n", test);
        }// if/else   
    
    }// for
   
    return 0;
}// main

