//
//  main.c
//  Mathematical Expression
//Problem Statement: You need to take two integer values as input and show the summation, subtraction, multiplication and division in the given format below.

//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    float div=(float)num1/num2;
    printf("%d + %d = %d\n",num1,num2, sum);
    printf("%d - %d = %d\n",num1,num2, sub);
    printf("%d * %d = %d\n",num1,num2, mul);
    printf("%d / %d = %0.2f\n",num1,num2, div);
    return 0;
}
