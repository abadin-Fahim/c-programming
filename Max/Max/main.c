//
//  main.c
//  Max
//Problem Statement: Given a number N, and N numbers, find maximum number in these N numbers.
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int a,max=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        if(a>max){
            max = a;
        }
        
    }
    printf("%d",max);
    return 0;
}
