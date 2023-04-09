//
//  main.c
//  Multiples
//Problem Statement: Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a%b==0 || b%a==0){
        printf("Multiples\n");
    }
    else{
        printf("No Multiples\n");
    }
    
    return 0;
}
