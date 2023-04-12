//
//  main.c
//  Even Numbers
//Problem Statement: Given a number N. Print all even numbers between 1 and N inclusive in separate lines.
//  Created by Joynal Abadin Fahim on 12.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    if(n==1){
        printf("-1\n");
    }
    else{
        for (int i=1; i<=n; i++) {
            if(i%2==0){
                printf("%d\n",i);
            }
        }
    }
    
    return 0;
}
