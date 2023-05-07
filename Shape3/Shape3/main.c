//
//  main.c
//  Shape3
//Problem Statement: Given a number N. Print a diamond that has 2N rows.
//  Created by Joynal Abadin Fahim on 07.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,space,k;
    scanf("%d",&n);
    space=n-1;
    k=1;
    for (int i=1; i<=(2*n); i++) {
    
        for (int j=1; j<=space; j++) {
            printf(" ");
        }
        
        for (int j=1; j<=k; j++) {
            printf("*");
            }
        if(i<=n-1){
            space--;
            k+=2;
        }
        else if (i==n){
            space=1;
            k-=2;
        }
        else{
            space++;
            k-=2;
        }
        
        printf("\n");
    }
    return 0;
}
