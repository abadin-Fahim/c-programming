//
//  main.c
//  Multiply
//Problem Statement: You will be given two integers A and B. You need to give output their multiplication.
//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d", &a,&b);
    long long int mul = (long long int) a*b;
    printf("%lld\n",mul);
    return 0;
}
