//
//  main.c
//  Print It_2
//Problem Statement: You will be given a positive integer N. You need to print "I Love Assignment" N times without the quotation mark.


//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("I Love Assignment\n");
    }
    
    return 0;
}
