//
//  main.c
//  Pattern_2
//Problem Statement: Write a C program to take positive integer N as input and print a pattern shown in the sample input output.
//  Created by Joynal Abadin Fahim on 05.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,space,k=1;
    scanf("%d",&n);
    space=n-1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=space; j++) {
            printf(" ");
        }
        for (int j=1; j<=k; j++) {
            printf("%d",i);
        }
        space--;
        k++;
        printf("\n");
    }
    return 0;
}
