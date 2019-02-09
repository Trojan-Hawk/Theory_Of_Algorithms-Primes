#include <stdio.h>
#include <math.h>
#include <stdint.h>

uint32_t primes[] = {
    2,   3,   5,   7,   11,  13,  17,  19,  23,  29, 
    31,  37,  41,  43,  47,  53,  59,  61,  67,  71, 
    73,  79,  83,  89,  97,  101, 103, 107, 109, 113, 
    127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 
    179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 
    233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 
    283, 293, 307, 311
};


int main(int argc, char *argv[]) {
    // variables
    long double cubeRoot;
    long double fraction;
    long double multiply;
    
    for(int i = 0; i < 64; i ++){
        // set the root
        cubeRoot = cbrtl((long double)primes[i]);
        // minus the floor of the root to isolate the fraction
        fraction = cubeRoot - floorl(cubeRoot);
        // get the first 32 bits of the fraction by multiplying the fraction by 2^32
        multiply = fraction * 0x100000000;
        // then using the floor method to remove the fraction
        multiply = floorl(multiply);
        // convert the fraction to hexidecimal
        
        // print out the primes, their cube roots, their fractions
        printf("%3d -> %3.6Lf -> %3.6Lf -> %0.8x \n", primes[i], cubeRoot, fraction, (uint32_t)multiply);

        
    }// for

    
    return 0;
}// main
