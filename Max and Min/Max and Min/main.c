//
//  main.c
//  Max and Min
//Problem Statement: Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1,num2,num3;
    scanf("%d %d %d", &num1,&num2,&num3);
    //Minimum number
    if(num1<=num2 && num1<=num3){
        printf("%d ", num1);
        }
    else if(num2<=num1 && num2<=num3){
        printf("%d ", num2);
        }
    else{
        printf("%d ", num3);
        }
    //Maximum number
    if(num1>=num2 && num1>=num3){
        printf("%d", num1);
        }
    else if(num2>=num1 && num2>=num3){
        printf("%d", num2);
        }
    else{
        printf("%d", num3);
        }
    
    return 0;
}
