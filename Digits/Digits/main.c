//
//  main.c
//  Digits
//Problem Statement: Given a number N. Print the digits of that number from right to left separated by space.
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int test;
    scanf("%d",&test);
    for (int i=0; i<test; i++) {
        int n;
        scanf("%d", &n);
        do {
            printf("%d ",n%10);
            n=n/10;
        }
        while (n != 0); {
            printf("\n");
        }
        
    }
    
    return 0;
}
