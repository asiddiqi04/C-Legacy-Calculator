#include <stdio.h>
#include <ctype.h>
#include <string.h>

void time() {

    int from, to;
    double t1, t2;

    // Display a menu for unit selection
    printf("\n\t\tseconds(1)\t\tminutes(2)\t\thours(3)\t\tdays(4)\n\n\n\t\tweeks(5)\t\tmonths(6)\t\tyears(7)\t\tDecades(8)\n\n\n\t\tcenturies(9)\t\tmillenniums(10)\t\tlight years(11)\t\tGenerations(12):");

    // Prompt the user to enter the 'from' unit
    printf("\n\n\n\t\tConvert from(number):");
    scanf("%d", &from);

    // Prompt the user to enter the 'to' unit
    printf("\n\n\n\t\tConvert to(number):");
    scanf("%d", &to);

    // If 'from' and 'to' units are the same, just display the input time
    if (from == to) {
        printf("Enter time:");
        scanf("%lf", &t1);
        printf("The resultant value is %f", t1);
    } 

    // If 'from' and 'to' units are different, perform the conversion
    else {
        printf("\n\n\n\t\tEnter the time:");
        scanf("%lf", &t1);

        // Conversion from seconds
        if (from == 1) {

            // Conversion to minutes
            if (to == 2) { 
                t2 = t1 / 60;
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f minute", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f minute", t2);
                }
                else{
                    printf("\n\n\n\t\t%f seconds = %f minutes", t1, t2);
                }
            }

            // Conversion to hours
            else if (to == 3) {
                t2 = t1 / 3600;
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f hour", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f hour", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f hours", t1, t2);
                }
            } 

            // Conversion to days
            else if (to == 4) { 
                t2 = t1 / (3600 * 24);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f day", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f day", t2);
                } 
                else{
                    printf("\n\n\n\t\t%f seconds = %f days", t1, t2);
                }
            } 

            // Conversion to weeks
            else if (to == 5) { 
                t2 = t1 / (3600 * 24 * 7);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f week", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f week", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f weeks", t1, t2);
                }
            } 

            // Conversion to months
            else if (to == 6){
                t2 = t1 / (3600 * 24 * 30);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f month", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f month", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f months", t1, t2);
                }
            } 
            
             // Conversion to years
            else if (to == 7) {
                t2 = t1 / (3600 * 24 * 365.25);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f year", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f year", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f years", t1, t2);
                }
            } 

            // Conversion to decades
            else if (to == 8) {
                t2 = t1 / (3600 * 24 * 365.25 * 10);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f decade", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f decade", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f decades", t1, t2);
                }

            } 

            // Conversion to centuries
            else if (to == 9) { 
                t2 = t1 / (3600 * 24 * 365.25 * 100);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f century", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f century", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f centuries", t1, t2);
                }

            } 

            // Conversion to millenniums
            else if (to == 10) { 
                t2 = t1 / (3600 * 24 * 365.25 * 1000);
                if (t2 <= 1 && t2 >= 0) {
                    printf("\n\n\n\t\t%f seconds = %f millennium", t1, t2);
                } 
                else if (t1 == 1) {
                    printf("\n\n\n\t\t1 second = %f millennium", t2);
                } 
                else {
                    printf("\n\n\n\t\t%f seconds = %f millenniums", t1, t2);
                }
            }

            // Conversion to generations
            if(to == 12){
                t2 = t1/(3600 * 24 * 365.25 * 30);
                if(t2 <= 1 && t2 >= 0){
                    printf("%f seconds = %f Generation",t1,t2);
                }
                else if(t1 == 1){
                    printf("1 second = %f Generation",t2);
                }
                else {
                    printf("%f seconds = %f Generations",t1,t2);
                }
            }

        }
        }

}

void temp() {
    int from, to;
    double t1, t2, t3;

    // Display conversion options
    printf("\n\n\n\t\t\tCelsius(1)\t\t\tFahrenheit(2)\t\t\tKelvin(3)");
    printf("\n\n\n\t\t\tConvert from (number):");
    scanf("%d", &from);
    printf("\n\n\n\t\t\tConvert to (number):");
    scanf("%d", &to);
    printf("\n\n\n\t\t\tEnter temperature:");
    scanf("%lf", &t1);

    // Check if the source and target units are the same
    if (from == to) {
        printf("\n\n\n\t\t\tThe resulting temperature remains the same: %lf", t1);
    }
    else {
        switch (from) {

        // Convert from Celsius
        case 1: 
            switch (to) {
            // Convert to Fahrenheit
            case 2:
                t2 = t1 * 9 / 5 + 32.0;
                printf("\n\n\n\t\t\t%f°C = %f°F", t1, t2);
                break;
            // Convert to Kelvin
            case 3:
                t2 = t1 + 273.15;
                printf("\n\n\n\t\t\t%f°C = %fK", t1, t2);
                break;
            }
            break;

        // Convert from Fahrenheit
        case 2: 
            switch (to) {
            // Convert to Celsius
            case 1:
                t2 = (t1 - 32.0) * 5 / 9;
                printf("\n\n\n\t\t\t%f°F = %f°C", t1, t2);
                break;
            // Convert to Kelvin
            case 3:
                t1 = (t1 - 32.0) * 5 / 9;
                t2 = t1 + 273.15;
                printf("\n\n\n\t\t\t%f°F = %fK", t1, t2);
                break;
            }
            break;

        // Convert from Kelvin
        case 3:
            switch (to) {
            // Convert to Celsius
            case 1: 
                t2 = t1 - 273.15;
                printf("\n\n\n\t\t\t%fK = %f°C", t1, t2);
                break;
            // Convert to Fahrenheit
            case 2:
                t2 = (t1 - 273.15) * 9 / 5 + 32;
                printf("\n\n\n\t\t\t%fK = %f°F", t1, t2);
                break;
            }
            break;
        }
    }
}


//The 2 functions below were taken from: https://www.geeksforgeeks.org/convert-base-decimal-vice-versa/

int val(char c)
{
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)c - 'A' + 10;
}
 
// Function to convert a number from given base 'b'
// to decimal
int toDeci(char *str, int base)
{
    int len = strlen(str);
    int power = 1; // Initialize power of base
    int num = 0;  // Initialize result
    int i;
 
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
           printf("Invalid Number");
           return -1;
        }
 
        num += val(str[i]) * power;
        power = power * base;
    }
 
    return num;
}




//The 3 functions below were taken from: https://www.geeksforgeeks.org/convert-base-decimal-vice-versa/

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
 
// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
 
// Function to convert a given decimal number
// to a base 'base' 
char* fromDeci(char res[], int base, int inputNum)
{
    int index = 0;  // Initialize index of result
 
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';
 
    // Reverse the result
    strev(res);
 
    return res;
}


void baseXToTen(int base){
    char input[128];
    int i = 0;

    printf("Base %d to 10\n",base);

    printf("\nEnter number to convert: ");
    scanf("%s", input);

    
    printf("\nResult = %d",toDeci(input,base));

}

void baseTenToX(int base){

    // char input[128];
    char buffer[128];
    int input;

    printf("Base 10 to %d\n",base);

    printf("\nEnter number to convert in base 10: ");
    scanf("%d", &input);

    
    printf("\nResult = %s",fromDeci(buffer,base,input));

}




void baseConversion(){
    printf("Base Conversion");

    int from = 0;
    int to = 0;

    //!Base 2 to base 10 - 2,1
    //!base 10 base 2 1,2

    //?base 2 base 16 2,3
    //?base 16 base 2 3,2

    //!base 10 to base 16 1,3
    //!base 16 to base 10 3,1

    printf("\n\n\n\t\t\tBase 10(1)\t\t\tBase 2 (2)\t\t\tBase 16 (3)");
    printf("\n\n\n\t\t\tConvert from (number):");
    scanf("%d", &from);
    printf("\n\n\n\t\t\tConvert to (number):");
    scanf("%d", &to);

    if(from == 2 && to == 1){
        //call 2 to 10
        baseXToTen(2);
    }
    else if (from == 1 && to == 2){
        baseTenToX(2);
        //10 to 2
    }
    else if(from == 2 && to == 3){
        //2 to 16
    }
    else if(from == 3 && to == 2){
        //16 to 2
    }
    else if(from == 1 && to == 3){
        baseTenToX(16);
        //10 to 16
    }
    else if(from == 3 && to == 1){
        baseXToTen(16);
        //16 to 10
    }
    else{
        printf("error: out of range/ incorrect value");
    }


    //error check if numbers are in range or the same (invalid)
    //add a do while loop to loop input
}




