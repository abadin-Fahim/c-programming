//
//  main.c
//  Fixed Password
//Problem Statement: Given multiple lines each line contains a number X which is a password. Print "Wrong" if the password is incorrect otherwise, print "Correct" and terminate the program.
//  Created by Joynal Abadin Fahim on 14.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    while (scanf("%d", &x) != EOF) {
        if(x == 1999){
            printf("Correct\n");
            break;
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
}
