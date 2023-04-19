//
//  main.c
//  Lowest Number
/*
 Problem Statement: Given a number N and an array A of N numbers. Print the lowest number and its position.
 
 Note: if there are more than one answer print first one's position.
 */
//  Created by Joynal Abadin Fahim on 19.04.23.
//

#include <stdio.h>
#include <limits.h>


int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
        
    }
    int low_num=INT_MAX, pos;
    for (int i=0; i<n; i++) {
        if(ar[i]<low_num){
            low_num = ar[i];
            pos = i+1;
        }
    }
    printf("%d %d\n",low_num, pos);
    return 0;
}
