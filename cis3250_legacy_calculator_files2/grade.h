#include <stdio.h>

float gradeCalculator(int numAssessments, float grades [], float weights []){
    			
    float grade = 0.0;
    float weight = 0.0;

    for (int a = 0; a < numAssessments; a++){
            grade = grade + (grades[a] * weights[a]);
            weight = weight + weights[a];
    }

    grade = grade / weight;

    return grade;

}