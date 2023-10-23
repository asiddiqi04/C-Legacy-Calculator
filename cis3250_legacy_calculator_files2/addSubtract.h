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
    // Returns the sum of two octal numbers
    return octal1 + octal2;
}


int octalSubtract(int octal1, int octal2) {
    //Returns the difference of two octal numbers 
    return octal1 - octal2;
}

int hexAdd(int hex1, int hex2)
{
    // Returns the sum of two hex numbers 
    return hex1 + hex2;
}

int hexSubtract(int hex1, int hex2)
{   
    // returns the difference of two hex numbers
    return hex1 - hex2;
}






// int main() {
//     int binary1, binary2;
//     int octal1, octal2;
//     int hex1, hex2;

//     int choice;
//     int operation;

//     printf("\n1. Binary");
//     printf("\n2. Octal");
//     printf("\n3. Hexadecimal");

//     printf("\nEnter base: ");
//     scanf("%d", &choice);

//     if(choice == 1)
//     {
//         printf("\n1. Add");
//         printf("\n2. Subtract");

//         printf("\nEnter operation: ");
//         scanf("%d", &operation);

//         if(operation == 1)
//         {
//             printf("Enter the first binary number: ");
//             scanf("%d", &binary1);

//             printf("Enter the second binary number: ");
//             scanf("%d", &binary2);

//             //int sum = binaryAddition(binary1, binary2);
//             int sum = binary1 + binary2;
//             printf("Sum of the two binary numbers: 0b%d\n", sum);


//         }

//         else if ( operation == 2)
//         {

//             printf("Enter the first binary number: ");
//             scanf("%d", &binary1);

//             printf("Enter the second binary number: ");
//             scanf("%d", &binary2);

//             int sum = binarySubtraction(binary1, binary2);

//             printf("Sum of the two binary numbers: %d\n", sum);

//         }

//     }

//     if(choice == 2)
//     {
//         printf("\n1. Add");
//         printf("\n2. Subtract");

//         printf("\nEnter operation: ");
//         scanf("%d", &operation);

//         if(operation == 1)
//         {
//             printf("Enter the first octal number: ");
//             scanf("%o", &octal1);

//             printf("Enter the second octal number: ");
//             scanf("%o", &octal2);

//             int sum = octalAddition(octal1, octal2);
            
//             printf("Sum of the two octal numbers: %o\n", sum);


//         }
//         else if(operation == 2)
//         {
//             printf("Enter the first octal number: ");
//             scanf("%o", &octal1);

//             printf("Enter the second octal number: ");
//             scanf("%o", &octal2);

//             int difference = octalSubtract(octal1, octal2);
//             printf("Difference of the two octal numbers: %o\n",difference);
//         }
//     }

//     if(choice == 3)
//     {
//         printf("\n1. Add");
//         printf("\n2. Subtract");

//         printf("\nEnter operation: ");
//         scanf("%d", &operation);

//         if(operation == 1)
//         {
//             printf("Enter the first hex number: ");
//             scanf("%x", &hex1);

//             printf("Enter the second hex number: ");
//             scanf("%x", &hex2);

//             int sum = hexAdd(hex1, hex2);
            
//             printf("Sum of the two hex numbers: %x\n", sum);


//         }
//         else if(operation == 2)
//         {
//             printf("Enter the first octal number: ");
//             scanf("%x", &hex1);

//             printf("Enter the second octal number: ");
//             scanf("%x", &hex2);

//             int difference = hexSubtract(octal1, octal2);
//             printf("Difference of the two hex numbers: %x\n",difference);
//         }

//     }

// }
