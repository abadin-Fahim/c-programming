//
//  main.c
//  Count I
//Problem Statement: You will be given an integer array A of size N. You need to count the number of even elements and the number of odd elements in the array and print them.


//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    int even_count=0,odd_count=0;
    for (int i=0; i<n; i++) {
        if(ar[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("%d %d\n",even_count,odd_count);
    return 0;
}
