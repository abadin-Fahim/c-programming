//
//  main.c
//  Count III
//Problem Statement: You will be given a string S as input. The string will contain only English small alphabets and will not contain any spaces. You need to tell how many time each alphabets from a to z appears.
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1000];
    scanf("%s",str);
    int count[26]={0};
    for (int i=0; i<strlen(str); i++) {
        count[str[i]-'a']++;
    }
    for (int i=0; i<26; i++) {
        printf("%c - %d\n",i+'a',count[i]);
    }
    return 0;
}
