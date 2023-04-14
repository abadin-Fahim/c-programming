//
//  main.c
//  update and print
//Problem Statement: You will given a positive integer N and an array A of size N. Also you will be given two values X and V. You need to change the value of X'th index to V and then print the array in reverse way.
//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar_A[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar_A[i]);
    }
    int value_x,value_v;
    scanf("%d %d", &value_x,&value_v);
    ar_A[value_x]  = value_v;
    for (int i=n-1; i>=0; i--) {
        printf("%d ",ar_A[i]);
    }
    
    
    
    return 0;
}
