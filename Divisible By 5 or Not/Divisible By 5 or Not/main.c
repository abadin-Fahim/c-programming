//
//  main.c
//  Divisible By 5 or Not
//Problem Statement: You will be given a positive integer N, you need to print from 1 to N and besides the value, print Yes or No. Print Yes if the value is divisible by 5 and print No otherwise.
//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        if (i%5==0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);
        }
    }
    
    return 0;
}
