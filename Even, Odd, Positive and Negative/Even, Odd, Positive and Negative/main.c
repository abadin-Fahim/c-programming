//
//  main.c
//  Even, Odd, Positive and Negative
//
//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    int even_count=0;
    int odd_count=0;
    int positive_count=0;
    int negative_count=0;
    int values;
    for (int i=0; i<n; i++) {
        scanf("%d",&values);
        if(values%2==0){
            even_count++;
            
        }
        else{
            odd_count++;
            
        }
        if(values>0){
            positive_count++;
            
        }
        else if(values<0){
            negative_count++;
            
        }
    }
    printf("Even: %d\n",even_count);
    printf("Odd: %d\n",odd_count);
    printf("Positive: %d\n", positive_count);
    printf("Negative: %d\n", negative_count);
    
    return 0;
}
