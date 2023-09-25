#include <stdio.h>

/* This code computes the value of x raised to the power of a non-negative integer n using a loop and returns the result. */
double powerfn(double x,int n){
    int i;
    double result= 1;

    for(i= 1;i<= n;i++){ 
        result*= x;
    }
    return result;
}

