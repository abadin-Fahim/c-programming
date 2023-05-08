//
//  main.c
//  No_Return+No_Parameter
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>

void calculator(void){
    double a,b;
    scanf("%lf %lf",&a, &b);
    double sum = a + b;
    double sub = a - b;
    double mul = a * b;
    double div = a / b;
    printf("Sum = %.2lf\n", sum);
    printf("Sub = %.2lf\n", sub);
    printf("Product = %.2lf\n",mul);
    printf("Division = %.2lf\n",div);
}

int main(int argc, const char * argv[]) {
    
    calculator();
    return 0;
}
