//
//  main.c
//  Matrix Again
//Problem Statement: You will be given a 2D matrix of N * M size. The matrix will contain integer value only. You need to print the values of last row and then print the values of last column.
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int rows,column;
    scanf("%d %d",&rows,&column);
    int a[rows][column];
    for (int i=0; i<rows; i++) {
        for (int j=0; j<column; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    for (int j=0; j<column; j++) {
        int last_row = a[rows-1][j];
        printf("%d ",last_row);
    }
    printf("\n");
    
    for (int i=0; i<rows; i++) {
        int last_column = a[i][column-1];
        printf("%d ",last_column);
    }
    printf("\n");
    return 0;
}
