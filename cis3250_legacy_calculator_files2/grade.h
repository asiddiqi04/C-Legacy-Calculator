#include <stdio.h>

void gradeCalculator(int numAssessments, float grades [], float weights [], int dropLowest){
    			
    float grade = 0.0, weight = 0.0, lowest = grades[0], lowestWeight;

    for (int a = 0; a < numAssessments; a++){
        if (grades[a] >= 0 && weights[a] >= 0){
            if (grades[a] < lowest){
                lowest = grades[a];
                lowestWeight = weights[a];
            }
            grade = grade + (grades[a] * weights[a]);
            weight = weight + weights[a];
        }
        else if (grades[a] < 0){
            printf("Grade cannot be negative\n");
            return;
        }
        else if (weights[a] < 0){
            printf("Weight cannot be negative\n");
            return;
        }
    }

    if (weight > 100){
        printf("Sum of weights cannot exceed 100\n");
        return;
    }

    if (dropLowest == 1){
        grade = grade - (lowest * lowestWeight);
        weight = weight - lowestWeight;
    }

    printf("Current grade = %.2f%\n", grade/weight);

}