//
//  main.c
//  Even or Odd_2
//Problem Statement: You will be given a positive integer N and N numbers after that. You need to tell the sum of even numbers and the sum of odd numbers separated by a space.
//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    int values;
    int sum_of_even =0;
    int sum_of_odd =0;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%d", &values);
        if(values%2==0){
            sum_of_even+=values;
        }
        else{
            sum_of_odd+=values;
        }
        
    }
    printf("%d %d\n",sum_of_even,sum_of_odd);
   
    return 0;
}
