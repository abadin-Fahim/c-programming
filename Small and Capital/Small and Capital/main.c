//
//  main.c
//  Small and Capital
//Problem Statement: You will be given a string S. The string will contain both small and capital English alphabets only. You need to tell how many of them are capital alphabets and how many are small alphabets.
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char str[1001];
    scanf("%s", str);
    int count_small=0,count_capital=0;
    for (int i=0; i<strlen(str); i++) {
        if(str[i]>='A' && str[i]<='Z'){
            count_capital++;
        }
        else if(str[i]>='a' && str[i]<='z'){
            count_small++;
        }
    }
    printf("%d %d\n",count_capital,count_small);
    return 0;
}
