//
//  main.c
//  Hash & Star Pattern
//Problem Statement: Write a C program that will take an positive Odd integer N and create this pattern for the corresponding inputs. See the sample input output for understanding the pattern.
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
        scanf("%d",&n);
        int mid_row=(n+1)/2;
        for (int i=1; i<=n; i++) {
            
            for (int j=1; j<=n; j++) {
                if(i==mid_row || j==mid_row){
                    printf("#");
                }
                else{
                    printf("*");
                }
            }
        
            printf("\n");
        }
    return 0;
}
