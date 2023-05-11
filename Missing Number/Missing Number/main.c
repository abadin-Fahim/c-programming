//
//  main.c
//  Missing Number
//Problem Statement: Given the sum of four numbers and three of those numbers, find the missing number. All four numbers are positive integers.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int t;
    scanf("%d", &t);
    int sum[t],num1[t],num2[t],num3[t];
    for (int i=0; i<t; i++) {
        
        scanf("%d %d %d %d",&sum[i],&num1[i],&num2[i],&num3[i]);
    }
    for (int i=0; i<t; i++) {
        int missing_num=sum[i]-num1[i]-num2[i]-num3[i];
        printf("%d\n",missing_num);
    }
    
    return 0;
}
