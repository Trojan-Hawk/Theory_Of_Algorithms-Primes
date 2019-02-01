#include <stdio.h>

int isPrime(unsigned int test){
	unsigned int i;

  	for(i=2; i<test; i++){
	 	 if(test % i == 0){
			printf("%d is not prime!", test);
			return 0;
	 	 }
	}
	return 1;
}

int main(int argc, char *argv[]) {

  unsigned int test = 563;

	if(isPrime(test)){
		printf("Is Prime\n");
	} else {
		printf("Not Prime!\n");
	}

  return 0;
}

