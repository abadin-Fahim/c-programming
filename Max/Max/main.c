//
//  main.c
//  Max
//Problem Statement: Given a number N, and N numbers, find maximum number in these N numbers.
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    /*
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
     */
    //alternative
    int n;
    scanf("%d", &n);
    int a,max=INT_MIN,min=INT_MAX;
    for (int i=0; i<n; i++) {
        scanf("%d", &a);
        if(a>max){
            max = a;
        }
        if(a<min){
            min = a;
        }
        
    }
    printf("%d %d\n",max,min);
    return 0;
}
