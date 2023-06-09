//
//  main.c
//  Workers
/*Problem Statement:Suppose there are M1 workers who can complete a work in D days. Unfortunately, some of them became sick before the start of the work, and now there are M2 workers. Can you tell how many days it will take for them to complete the work?
 
 Note: If the answer is a floating value, print the integer part of the answer.
 */
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m1,m2,days_take_for_m1,days_take_for_m2;
    scanf("%d %d %d",&m1,&m2,&days_take_for_m1);
    days_take_for_m2 = (days_take_for_m1*m1)/m2;
    printf("%d\n",days_take_for_m2);
    return 0;
}
