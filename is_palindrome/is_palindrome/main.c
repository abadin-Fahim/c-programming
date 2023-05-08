//
//  main.c
//  is_palindrome
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>
#include <string.h>

int is_palindrome(char* str){
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i -1]){
            return 0;
        }
    }
    return 1;
    
    
}

int main(int argc, const char * argv[]) {
    char str[10];
    scanf("%s",str);
    int result = is_palindrome(str);
    if(result == 1){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}
