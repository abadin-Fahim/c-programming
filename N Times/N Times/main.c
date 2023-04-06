//
//  main.c
//  N Times
//Problem Statement: You will be given a positive integer N, you need to print "I Love Practice" N times.
//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        printf("I Love Practice\n");
    }
    return 0;
}
