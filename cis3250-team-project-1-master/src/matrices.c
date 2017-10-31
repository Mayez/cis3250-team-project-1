// Version: 0.0.1
// Last major update: 10/17/2017 by Max Mastalerz
// Author(s): Max Mastalerz
// Description: File containing the functions for matrix sum, product, & transposition calculations
// Etc. This file is currently in the process of being refactored to follow our team coding conventions

#include <stdio.h>

//Calculates the sum of a matrix
void matrixSum() {
    int i;
    int j;
    int n1;
    int m1;
    int n2;
    int m2;

    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &n1);

    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &m1);

    printf("Enter the number of rows of matrix 2: ");
    scanf("%d", &n2);

    printf("Enter the number of columns of matrix 2: ");
    scanf("%d", &m2);

    if(n1 == n2 && m1 == m2) {
        float a[n1][m1];
        float b[n2][m2];
        float c[n1][m1];

        for(i = 0; i < n1; i++) {
            printf("Enter the members of matrix 1 row %d : ", i+1);
            for(j = 0; j < m1; j++) {
                scanf("%f", &a[i][j]);
            }
        }

        for(i = 0; i < n2; i++) {
            printf("Enter the members of matrix 2 row %d : ", i+1);
            for(j = 0; j < m2; j++) {
                scanf("%f", &b[i][j]);
            }
        }
        
        for(i = 0; i < n1; i++) {
            for(j = 0; j < m1; j++) {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        
        printf("The sum of both matrices is\n: ");
        
        for(j = 0; j < m1; j++) {
            for(i = 0; i < n1; i++) {
                printf("\t\t %.0f", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("\n\tThe matrices are incompatible");
    }
}

// Calculates the product of a matrix
void matrixProduct() {
    int i;
    int j;
    int k;
    int l;
    int n1;
    int n2;
    int m1;
    int m2;

    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &n1);

    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &m1);

    printf("Enter the number of rows of matrix 2: ");
    scanf("%d", &n2);

    printf("Enter the number of columns of matrix 2: ");
    scanf("%d", &m2);

    float a[n1][m1];
    float b[n2][m2];
    float c[n1][m1];

    for(i = 0; i < n1; i++) {
        printf("Enter the members of matrix 1 row %d : ",i+1);
        
        for(j = 0; j < m1; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    for(i = 0; i < n2; i++) {
        printf("Enter the members of matrix 2 row %d : ",i+1);
        
        for(j = 0; j < m2; j++) {
            scanf("%f", &b[i][j]);
        }
    }

    c[i][j] = 1;
    for(i = 0; i < n1; i++) {
        for(j = 0; j < m2; j++) {
            c[i][j] = 0;
            c[i][j] += a[i][j] * b[i][j];
        }
    }

    printf("The product of the matrix is\n:");

    for(j = 0; j < m1; j++) {
        for(i = 0; i < n2; i++) {
            printf("\t\t %.0f", a[i][j]);
        }
        
        printf("\n");
    }
}

// Performs matrix transposition
void matrixTranspose() {
    int i;
    int j;
    int n;
    int m;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    printf("Enter the number of columns: ");
    scanf("%d", &m);

    float a[n][m];

    for(i = 0; i < n; i++) {
        printf("Enter the members of row %d : ", i+1);
        for(j = 0; j < m; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    printf("The transpose of the matrix is\n:");
    for(j = 0; j < m; j++) {
        for(i = 0; i < n; i++) {
            printf("\t\t %.0f", a[i][j]);
        }

        printf("\n");
    }
}