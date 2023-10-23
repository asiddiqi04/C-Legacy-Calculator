/*
  Name: Tanveer Sadat and Benjamin Gobraeil
  Program Description:
  This is the gradeCalculator function. It takes four parameters: 
  numAssessments (the number of assessments), grades (an array of grades), weights (an array of weights), 
  and dropLowest (a flag indicating whether to drop the lowest grade).

*/

#include <stdio.h>

void gradeCalculator(int numAssessments, float grades [], float weights [], int dropLowest){
    			
    float grade = 0.0, weight = 0.0, lowest = grades[0], lowestWeight;

    printf("Report of Grades and Weights:\n");

    for (int a = 0; a < numAssessments; a++){
        // Make sure grades and weights are positive values
        if (grades[a] >= 0 && weights[a] >= 0){

            // Keep track of the lowest grade and weight
            if (grades[a] < lowest){
                lowest = grades[a];
                lowestWeight = weights[a];
            }

            printf("Assessment %d: Grade = %.2f, Weight = %.2f\n", a + 1, grades[a], weights[a]);

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

    // Drop the lowest grade when asked to
    if (dropLowest == 1){
        printf("Dropped Lowest Grade: %.2f, Weight: %.2f\n", lowest, lowestWeight);
        grade = grade - (lowest * lowestWeight);
        weight = weight - lowestWeight;
    }

    printf("Current grade = %.2f%\n", grade/weight);

}