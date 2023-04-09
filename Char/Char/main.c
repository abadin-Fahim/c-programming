//
//  main.c
//  Char
//Problem Statement: Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        int uppercase = x-32;
        printf("%c\n", uppercase);
    }
    else{
        int lowercase = x+32;
        printf("%c\n", lowercase);
    }
    
    return 0;
}
