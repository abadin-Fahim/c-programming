//
//  main.c
//  Summation_Recursion
//
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>
int sum=0;
void summation(int ar[], int n, int i){
    
    if(i==n){
        return;
    }
    sum += ar[i];
    
    summation(ar, n, i+1);
    
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    int ar[x];
    for (int i=0; i<x; i++) {
        scanf("%d",&ar[i]);
    }
    summation(ar, x, 0);
    printf("%d",sum);
    return 0;
}
