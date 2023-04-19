//
//  main.c
//  Positions in array
/*
 Problem Statement: Given a number N and an array A of N numbers. Print all array positions that store a number less than or equal to 10 and the number stored in that position.
 */
//  Created by Joynal Abadin Fahim on 19.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
        
    }
    for (int i=0; i<n; i++) {
        if(ar[i]<=10){
            printf("A[%d] = %d\n",i,ar[i]);
        }
    }
    return 0;
}
