//
//  main.c
//  First digit !
//Problem Statement: Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num;
    scanf("%d",&num);
    int div = 0;
    for (int i=0; i<=num; i++) {
        div = num/1000;
        
    }
    if(div%2==0){
        printf("EVEN\n");
    }
    else{
        printf("ODD\n");
    }
    
    
    return 0;
}
