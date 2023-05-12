//
//  main.c
//  Middle Man
//
//  Created by Joynal Abadin Fahim on 12.05.23.
/*
 Problem Statement: There are N army people standing in a line. Their major ordered them to make a line in asceding order according to their age. And then the major called the person stading in the middle. If there are two people in the middle then he will call both of them. Can you tell the age of the middle man or men?

 Note: If N is odd then the middle person will be (N+1)/2 otherwise there will be two person in the middle, and they are (N/2) and (N/2)+1.
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int age[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&age[i]);
    }
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if(age[i]>age[j]){
                int temp=age[i];
                age[i]=age[j];
                age[j]=temp;
            }
        }
        
    }
     if(n%2==1){
         printf("%d\n",age[n/2]);
     }
     else{
         printf("%d %d\n",age[n/2-1],age[n/2]);
     }
     
    return 0;
}
