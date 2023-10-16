#include <stdio.h>
#include <stdlib.h>

// Function to add two binary numbers
int binaryAddition(int binary1, int binary2) {
    int carry = 0, result = 0, placeValue = 1;

    while (binary1 > 0 || binary2 > 0 || carry > 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Add the bits along with the carry
        int sum = bit1 + bit2 + carry;

        // Calculate the carry for the next iteration
        carry = sum / 2;

        // Update the result with the sum at the current place value
        result += (sum % 2) * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Remove the last digits from binary1 and binary2
        binary1 /= 10;
        binary2 /= 10;
    }

    return result;
}



int binarySubtraction(int binary1, int binary2) {
    int borrow = 0, result = 0, placeValue = 1;

    while (binary1 > 0 || binary2 > 0) {
        int bit1 = binary1 % 10;
        int bit2 = binary2 % 10;

        // Subtract the bits along with the borrow
        int diff = bit1 - bit2 - borrow;

        // Calculate the borrow for the next iteration
        if (diff < 0) {
            diff += 2;
            borrow = 1;
        } else {
            borrow = 0;
        }

        // Update the result with the difference at the current place value
        result += diff * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Remove the last digits from binary1 and binary2
        binary1 /= 10;
        binary2 /= 10;
    }

    return result;
}



// Function to add two octal numbers
int octalAddition(int octal1, int octal2) {
    int carry = 0, result = 0, placeValue = 1;

    while (octal1 > 0 || octal2 > 0 || carry > 0) {
        int digit1 = octal1 % 10;
        int digit2 = octal2 % 10;

        // Add the digits along with the carry
        int sum = digit1 + digit2 + carry;

        // Calculate the carry for the next iteration
        carry = sum / 8;

        // Update the result with the sum at the current place value
        result += (sum % 8) * placeValue;

        // Move to the next place value
        placeValue *= 10;

        // Remove the last digits from octal1 and octal2
        octal1 /= 10;
        octal2 /= 10;
    }

    return result;
}






int main() {
    int binary1, binary2;
    int octal1, octal2;

    int choice;
    int operation;

    printf("\n1. Binary");
    printf("\n2. Octal");
    printf("\n3. Hexadecimal");

    printf("\nEnter base: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("\n1. Add");
        printf("\n2. Subtract");

        printf("\nEnter operation: ");
        scanf("%d", &operation);

        if(operation == 1)
        {
            printf("Enter the first binary number: ");
            scanf("%d", &binary1);

            printf("Enter the second binary number: ");
            scanf("%d", &binary2);

            int sum = binaryAddition(binary1, binary2);

            printf("Sum of the two binary numbers: %d\n", sum);


        }

        else if ( operation == 2)
        {

            printf("Enter the first binary number: ");
            scanf("%d", &binary1);

            printf("Enter the second binary number: ");
            scanf("%d", &binary2);

            int sum = binarySubtraction(binary1, binary2);

            printf("Sum of the two binary numbers: %d\n", sum);

        }

    }

    if(choice == 2)
    {
        printf("\n1. Add");
        printf("\n2. Subtract");

        printf("\nEnter operation: ");
        scanf("%d", &operation);

        if(operation == 1)
        {
            printf("Enter the first octal number: ");
            scanf("%d", &octal1);

            printf("Enter the second octal number: ");
            scanf("%d", &octal2);

            int sum = octalAddition(octal1, octal2);

            printf("Sum of the two octal numbers: %d\n", sum);


        }
    }

}
