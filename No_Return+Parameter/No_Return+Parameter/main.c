//
//  main.c
//  No_Return+Parameter
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>

void summation(int a , int b){
    int sum = a + b;
    printf("Sum = %d\n",sum);
    return;
}
void substract(int a , int b){
    int sub = a - b;
    printf("Sub = %d\n",sub);
    return;
}
void multiply(int a , int b){
    int product = a * b;
    printf("Product = %d\n",product);
    return;
}
void division(int a , int b){
    int div = a / b;
    printf("Division = %d\n",div);
    return;
}

int main(int argc, const char * argv[]) {
    
    int x,y;
    scanf("%d %d", &x, &y);
    summation(x, y);
    substract(x, y);
    multiply(x, y);
    division(x, y);
    
    return 0;
}
