//
//  main.c
//  Multiplication table
//Problem Statement: Given a number N. Print the maltiplication table of the number from 1 to 12
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=12; i++) {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}

