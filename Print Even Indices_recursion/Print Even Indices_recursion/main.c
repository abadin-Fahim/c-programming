//
//  main.c
//  Print Even Indices_recursion
//Problem Statement: Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

void even_indices(int ar[], int n, int i){
    if(i<0){
        return;
    }
    
    else if (i%2==0){
        printf("%d ",ar[i]);
    }
    even_indices(ar, n, i-1);
    
}

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    int ar[x];
    for (int i=0; i<x; i++) {
        scanf("%d",&ar[i]);
    }
    even_indices(ar,x,x-1);
    return 0;
}
