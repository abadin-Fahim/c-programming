//
//  main.c
//  Find It
//Problem Statement: You will given an integer array A and the size N. You will also be given an integer value X. You need to tell how many times X was appeared in the array.
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    int x, count=0;
    scanf("%d",&x);
    for (int i=0; i<n; i++) {
        if(ar[i]==x){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
