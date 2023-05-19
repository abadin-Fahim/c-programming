//
//  main.c
//  Triangle
//Problem Statement: You will be given three non-negative integers A,B and C. You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). If the answer is yes, print "Yes" otherwise "No".
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0 && a==b && b==c && c==a){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
