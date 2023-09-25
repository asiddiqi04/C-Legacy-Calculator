#include <stdio.h>

// Function to perform matrix addition
void matrix_sum(){
    int i, j, n1, m1, n2, m2;

    // Get dimensions of matrices
    printf("Enter the number of rows of matrix 1:");
    scanf("%d", &n1);
    printf("Enter the number of columns of matrix :");
    scanf("%d", &m1);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d", &n2);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d", &m2);

    // Check if matrices are compatible for addition
    if (n1 == n2 && m1 == m2){
        float a[n1][m1];
        float b[n2][m2];
        float c[n1][m1];

        // Input elements of matrix 1
        for(i=0; i < n1; i++){
            printf("Enter the members of matrix 1 row %d :",i + 1);
            for(j = 0; j < m1; j++){
                scanf("%f", &a[i][j]);
            }
        }

        // Input elements of matrix 2
        for(i = 0; i < n2; i++){
            printf("Enter the members of matrix 2 row %d :", i + 1);
            for(j = 0; j < m2; j++){
                scanf("%f", &b[i][j]);
            }
        }

        // Compute sum of matrices
        for(i = 0; i < n1; i++){
            for(j=0;j<m1;j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        // Print the result
        printf("The sum of both matrices is\n:");
        for(j=0; j < m1; j++){
            for(i = 0; i < n1; i++){
                printf("\t\t %.0f", c[i][j]);
            }
            printf("\n");
        }
    }
    else {
        printf("\n\tThe matrices are incompatible");
    }
}

// Function to perform matrix multiplication
void matrix_product(){
    int i, j, n1, m1, n2, m2, l, k;

    // Get dimensions of matrices
    printf("Enter the number of rows of matrix 1:");
    scanf("%d",&n1);
    printf("Enter the number of columns of matrix :");
    scanf("%d",&m1);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d",&n2);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d",&m2);

    float a[n1][m1];
    float b[n2][m2];
    float c[n1][m1];

    // Input elements of matrix 1
    for(i = 0; i < n1; i++){
        printf("Enter the members of matrix 1 row %d :", i + 1);
        for(j = 0; j < m1; j++){
            scanf("%f", &a[i][j]);
        }
    }

    // Input elements of matrix 2
    for(i = 0; i < n2; i++){
        printf("Enter the members of matrix 2 row %d :", i + 1);
        for(j = 0; j < m2; j++){
            scanf("%f", &b[i][j]);
        }
    }

    // Initialize matrix c
    for(i = 0; i < n1; i++){
        for(j = 0; j < m1; j++){
            c[i][j] = 0;
        }
    }

    // Compute product of matrices
    for(i = 0; i < n1; i++){
        for(j = 0; j < m2; j++){
            for(k = 0; k < m1; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result
    printf("The product of the matrix is\n:");
    for (j = 0; j < m1; j++){
        for(i = 0; i < n2; i++){
            printf("\t\t %.0f", c[i][j]);
        }
        printf("\n");
    }
}

// Function to compute transpose of a matrix
void matrix_transpose(){
    int i, j, n, m;

    // Get dimensions of the matrix
    printf("Enter the number of rows:");
    scanf("%d", &n);
    printf("Enter the number of columns:");
    scanf("%d", &m);

    float a[n][m];

    // Input elements of the matrix
    for(i = 0; i < n; i++){
        printf("Enter the members of row %d :", i + 1);
        for(j = 0; j < m; j++){
            scanf("%f", &a[i][j]);
        }
    }

    // Compute transpose of the matrix
    printf("The transpose of the matrix is\n:");
    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            printf("\t\t %.0f", a[i][j]);
        }
        printf("\n");
    }
}
