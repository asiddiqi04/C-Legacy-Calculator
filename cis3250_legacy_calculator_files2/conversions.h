#include <stdio.h>

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
