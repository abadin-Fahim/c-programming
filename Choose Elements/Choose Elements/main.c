//
//  main.c
//  Choose Elements
/*
 Problem Statement: You are given an array 𝑎 of 𝑛 integers, and an integer 𝑘
 
 You can choose at most 𝑘 elements and get their summation.

 What is the maximum summation you can get?
 */
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k;
    scanf("%d %d",&n,&k);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if(ar[j]>ar[i]){
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    long long int sum=0;
    for (int i=0; i<k; i++) {
        sum += ar[i];
        
    }
    printf("%lld\n",sum);
    return 0;
}
