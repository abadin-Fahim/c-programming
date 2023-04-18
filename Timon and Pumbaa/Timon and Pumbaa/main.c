//
//  main.c
//  Timon and Pumbaa
/*
 Problem Statement: Timon has 𝑎 candies and his friend, Pumbaa, has 𝑏 candies, so Pumbaa asked Timon to tell him the value of 𝑎−𝑏. However, Timon will tell him the value of 𝑎−𝑏 if the value is ≥0; otherwise, he will lie and say 0. Since it was a hard task for Timon, he's asking for your help.
Given two numbers 𝑎 and 𝑏, find the answer.
 */
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a-b >= 0){
        printf("%d\n", a-b);
    }
    else{
        printf("0\n");
    }
    return 0;
}
