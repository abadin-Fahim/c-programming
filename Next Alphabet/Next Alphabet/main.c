//
//  main.c
//  Next Alphabet
//Problem Statement: Given a lowercase alphabet character. You have to print the next character in the alphabet.
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char alphabet;
    scanf("%c", &alphabet);
    if(alphabet == 'z'){
        printf("%c\n", alphabet-25);
    }
    else{
        printf("%c\n", alphabet+1);
    }
    
    return 0;
}
