#include "conversions.h"

void testOutput(long int expected, char * str, int base)
{
    
    int result = toDeci(str, base);
    if (result == expected) {
       printf("PASS: %s (Base %d) => %ld\n", str, base, expected);
    } 
    else {
        printf("FAIL: %s (Base %d) => Expected: %d, Actual: %ld\n", str, base, expected, result);
    }
}
