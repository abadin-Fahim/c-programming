//
//  main.c
//  Capital or Small or Digit
//Problem Statement: Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
//  Created by Joynal Abadin Fahim on 09.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char x;
    scanf("%c", &x);
    if((x>='A' && x<='Z') || (x>='a' && x<='z')){
        if(x>='A' && x<='Z'){
            printf("ALPHA\nIS CAPITAL\n");
        }
        else{
            printf("ALPHA\nIS SMALL\n");
        }
    }
    else{
        printf("IS DIGIT\n");
    }
    
    return 0;
}
