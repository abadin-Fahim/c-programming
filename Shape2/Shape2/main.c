//
//  main.c
//  Shape2
//Problem Statement: Given a number N. Print a pyramid that has N rows.
//  Created by Joynal Abadin Fahim on 07.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,space,k;
    scanf("%d",&n);
    space=n-1;
    k=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=space; j++) {
            printf(" ");
        }
        for (int j=1; j<=k; j++) {
            printf("*");
        }
        space--;
        k+=2;
        printf("\n");
    }
    return 0;
}
