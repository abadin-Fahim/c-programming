//
//  main.c
//  Shape1
//Problem Statement: Given a number N. Print a face down right angled triangle that has N rows.
//  Created by Joynal Abadin Fahim on 07.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k;
    scanf("%d",&n);
    k=n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=k; j++) {
            printf("*");
        }
        k--;
        printf("\n");
    }
    return 0;
}
