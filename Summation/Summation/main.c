//
//  main.c
//  Summation
/*
 Problem Statement: Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7
 */
//  Created by Joynal Abadin Fahim on 19.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ary[n];
    int sum=0;
    for (int i=0; i<n; i++) {
        scanf("%d",&ary[i]);
        sum += ary[i];
        
    }
    if(sum<0){
        printf("%d\n",sum*(-1));

    }
    else{
        printf("%d\n",sum);
    }
        return 0;
}
