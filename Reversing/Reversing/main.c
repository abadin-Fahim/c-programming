//
//  main.c
//  Reversing
/*
 Problem Statement: Given a number N and an array A of N numbers. Print the array in a reversed order.
 
 Note:

 *Don't use built-in-functions.
 */
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    int i=0,j=n-1;
    while (i<j) {
        int temp=ar[i];
        ar[i] = ar[j];
        ar[j]=temp;
        i++;
        j--;
    }
    for (int i=0; i<n; i++) {
        printf("%d ",ar[i]);
    }
    
    return 0;
}
