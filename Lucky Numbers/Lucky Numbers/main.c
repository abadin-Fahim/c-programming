//
//  main.c
//  Lucky Numbers
/*
 Problem Statement: A number of two digits is lucky if one of its digits is divisible by the other.
 
 For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

 Given a number between 10 and 99, determine whether it is lucky or not.
 */
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int a = n%10;
    int b = n/10;
    if(a%b==0 || b%a==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
