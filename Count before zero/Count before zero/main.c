//
//  main.c
//  Count before zero
//Problem Statement: Write a function named count_before_zero() which receives an array of integers and the size of that array and counts the number of elements in that array until you find zero and returns that count. Call that function in the main function and print the count there.
//  Created by Joynal Abadin Fahim on 05.05.23.
//

#include <stdio.h>

int count_before_zero(int ar[], int sz){
    int count = 0;
    for (int i=0; i<sz; i++) {
        if(ar[i]==0){
            break;
        }
        count++;
    }
    return count;
}

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    int  sz;
    sz= sizeof(ar) / sizeof(ar[0]);
    int count = count_before_zero(ar,sz);
    printf("%d\n",count);
    return 0;
}
