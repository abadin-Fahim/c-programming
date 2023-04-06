//
//  main.c
//  Divisible
//Problem Statement: You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.
//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    if(n>=0 && n%3==0){
        printf("YES\N");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
