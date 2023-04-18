//
//  main.c
//  Ali Baba and Puzzles
/*
 Problem Statement: One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×) between the other three numbers; so that each operator is used only once.
𝑎  ◻   𝑏  ◻   𝑐  =   𝑑
 Can you solve this tricky puzzle for him?

 */
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a+b-c==d){
        printf("YES\n");
    }
    else if(a-b+c==d){
        printf("YES\n");
    }
    else if(a+b*c==d){
        printf("YES\n");
    }
    else if(a*b+c==d){
        printf("YES\n");
    }
    else if(a-b*c==d){
        printf("YES\n");
    }
    else if(a*b-c==d){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
