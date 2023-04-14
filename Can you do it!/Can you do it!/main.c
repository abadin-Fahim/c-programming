//
//  main.c
//  Can you do it!
//Problem Statement: You will be given an integer N. If N is a negative number or zero print from N to 1, otherwise print from 1 to N.
//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    if(n<=0){
        for (int i=n; i<=1; i++) {
            printf("%d ",i);
        }
    }
    else{
        for (int i=1; i<=n; i++) {
            printf("%d ",i);
        }
    }
    
    
    
    return 0;
}
