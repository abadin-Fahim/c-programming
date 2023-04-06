//
//  main.c
//  Even or Odd
//Problem Statement: You need to take one non-negative integer (0 or greater than 0) value as input and tell if it is even or odd.

//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
        if (n%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    return 0;
}
