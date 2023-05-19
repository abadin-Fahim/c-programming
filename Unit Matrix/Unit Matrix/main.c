//
//  main.c
//  Unit Matrix
/*
 Problem Statement: You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.
 
 Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.
 */
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int a[n][n];
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if(i==j){
                if(a[i][j] != 1){
                    flag=0;
                    break;
                }
            }
            else if (a[i][j] != 0){
                flag=0;
                break;
            }
        }
    }
    
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
