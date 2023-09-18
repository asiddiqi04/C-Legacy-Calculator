#include <stdio.h>
#include <stdint.h>


/*Factorial of: n*/
unsigned long long int fact(int n){
    unsigned long long int fact;
    fact=1;

    for(int i = n; i > 0; i--){
        fact *= i;
    }

    return fact;
}

