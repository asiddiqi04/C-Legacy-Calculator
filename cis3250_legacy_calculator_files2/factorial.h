#include <stdio.h>
#include <stdint.h>


/*Finds factorial of parameter n*/
unsigned long long int fact(int n){
    unsigned long long int fact;
    fact = 1;

    for(int i = n; i > 0; i--){

        /* Multiply current factorial by 1 */
        fact *= i;
    }

    return fact;
}

