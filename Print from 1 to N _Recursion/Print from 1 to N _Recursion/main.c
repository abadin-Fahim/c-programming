//
//  main.c
//  Print from 1 to N _Recursion
//Problem Statement: Given a number N. Print numbers from 1 to N in separate lines.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

void print_numbers(int n){
    
    if(n<=0){
        return;
    }
    print_numbers(n-1);
    printf("%d\n",n);
    
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    print_numbers(x);
    return 0;
}
