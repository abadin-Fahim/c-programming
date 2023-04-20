//
//  main.c
//  Count II
/*Problem Statement : You will be given a string S as input contains only small English alphabets. You need to tell the number of vowels in it. The string will not contain any spaces.
 */
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100];
    scanf("%s",s);
    int vowel_count=0;
    for (int i=0; i<strlen(s); i++) {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            vowel_count++;
        }
        
    }
    printf("%d\n",vowel_count);
    return 0;
}
