//
//  main.c
//  Variables
//Problem Statement: You need to take an integer A, a very big integer B, a floating value C and a character D as input and output them serially.
//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a;
    long long int b;
    float c;
    char d;
    scanf("%d %lld %f %c", &a, &b, &c, &d);
    
    printf("%d\n%lld\n%.2f\n%c\n", a,b,c,d);
    return 0;
}
