//
//  main.c
//  Replacement
/*
 Problem Statement: Given a number N and an array A of N numbers. Print the array after doing the following operations:
 
 Replace every positive number by 1.
 Replace every negative number by 2.
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
        if(ar[i]>0){
            printf("1 ");
        }
        else if (ar[i]<0){
            printf("2 ");
        }
        else{
            printf("0 ");
        }
    }
    return 0;
}
