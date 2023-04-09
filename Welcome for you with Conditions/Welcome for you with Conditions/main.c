//
//  main.c
//  Welcome for you with Conditions
//Problem Statement: Given two numbers A and B. Print "Yes" if A is greater than or equal to B. Otherwise print "No".
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d",&a,&b);
    if(a>=b){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}
