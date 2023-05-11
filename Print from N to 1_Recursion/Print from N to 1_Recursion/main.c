//
//  main.c
//  Print from N to 1_Recursion
//Problem Statement: Given a number N. Print all numbers from N to 1 separated by a single space.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

void reverse_number(int n, int first_num){
    if(n==1){
        printf("1");
        return;
    }
    printf("%d ",n);
    reverse_number(n-1,first_num);
    
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    reverse_number(x,1);
    return 0;
}
