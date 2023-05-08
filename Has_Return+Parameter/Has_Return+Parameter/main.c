//
//  main.c
//  Has_Return+Parameter
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>

int summation(int a, int b){
    int sum = a + b;
    return sum;
}
int substract(int a, int b){
    int sub = a - b;
    return sub;
}

int multiply(int a, int b){
    int mul = a * b;
    return mul;
}
int division(int a, int b){
    int div = a / b;
    return div;
}

int main(int argc, const char * argv[]) {
    int x,y;
    scanf("%d %d",&x,&y);
    int sum= summation(x,y);
    int sub= substract(x,y);
    int product= multiply(x,y);
    int div= division(x,y);
    printf("Sum = %d\n",sum);
    printf("Sub = %d\n",sub);
    printf("Multiply = %d\n",product);
    printf("Division = %d\n",div);
    return 0;
}
