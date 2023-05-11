//
//  main.c
//  Print Recursion
//Problem Statement: Given a number 𝑁. Print "I love Recursion" 𝑁 times.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

void print_recursion(int n){
    if(n<=0){
        return;
    }
    printf("I love Recursion\n");
    print_recursion(n-1);
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    print_recursion(x);
    return 0;
}
