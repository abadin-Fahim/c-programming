//
//  main.c
//  Count It
//Problem Statement: You will be given a string S consisting of small alphabets, capital alphabets and spaces. You need to count number of small alphabets, capital alphabets and spaces in the string S.
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[1001];
    fgets(s, 1001, stdin);
    int count_capital=0;
    for (int i=0; i<strlen(s); i++) {
        if(s[i]>='A' && s[i]<='Z'){
            count_capital++;
        }
    }
    
    printf("Capital - %d\n",count_capital);
    int count_small=0;
    for (int i=0; i<strlen(s); i++) {
        if(s[i]>='a' && s[i]<='z'){
            count_small++;
        }
    }
    printf("Small - %d\n",count_small);
    
    int count_spaces=0;
    for (int i=0; i<strlen(s); i++) {
        if(s[i]==' '){
            count_spaces++;
        }
    }
    printf("Spaces - %d\n",count_spaces);
    
    
    return 0;
}
