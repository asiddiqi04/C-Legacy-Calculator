#include <stdio.h>

float gradeCalculator(int numAssessments, float grades [], float weights []){
    			
    float grade = 0.0;
    float weight = 0.0;

    for (int a = 0; a < numAssessments; a++){
            if (grades[a] >= 0 && weights[a] >= 0){
                grade = grade + (grades[a] * weights[a]);
                weight = weight + weights[a];
            }
            else if (grades[a] < 0){
                printf("Grade cannot be negative\n");
                return -1;
            }
            else if (weights[a] < 0){
                printf("Weight cannot be negative\n");
                return -1;
            }
    }

    if (weight > 100){
        printf("Sum of weights cannot exceed 100\n");
        return -1;
    }

    grade = grade / weight;

    return grade;

}