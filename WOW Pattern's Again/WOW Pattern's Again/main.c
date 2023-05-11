//
//  main.c
//  WOW Pattern's Again
/*
 Problem Statement: Write a C program that will take an integer N and creates this pattern for the corresponding inputs.

 For example,

 If N=3, the pattern look like this,
 image

 If N=6, the pattern look like this,
 image
 */
//  Created by Joynal Abadin Fahim on 12.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int space=n-1,k=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=space; j++) {
            printf(" ");
        }
        
        for (int j=1; j<=k; j++) {
            if(i%2==0){
                printf("*");
            }
            else{
                printf("^");
            }
        }
        
        space--;
        k+=2;
        printf("\n");
    }
    return 0;
}
