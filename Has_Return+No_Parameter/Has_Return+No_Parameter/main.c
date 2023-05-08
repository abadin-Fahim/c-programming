//
//  main.c
//  Has_Return+No_Parameter
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>

int summation(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
    
}
int substract(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int sub = a - b;
    return sub;
}
int multiply(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int mul = a * b;
    return mul;
}
int division(void){
    int a,b;
    scanf("%d %d", &a, &b);
    int div = a / b;
    return div;
}

int main(int argc, const char * argv[]) {
    
    int sum = summation();
    int sub = substract();
    int product = multiply();
    int div = division();
    printf("Sum = %d\n", sum);
    printf("Sub = %d\n", sub);
    printf("Product = %d\n", product);
    printf("Division = %d\n", div);
    
    return 0;
}
