//
//  main.c
//  Divisors
//Problem Statement: Given a number N. Print all the divisors of N in ascending order.
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        int divisors = n%i;
        if(divisors==0){
            printf("%d\n",i);
        }
        
    }
    return 0;
}
