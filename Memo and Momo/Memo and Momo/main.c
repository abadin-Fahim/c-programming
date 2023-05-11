//
//  main.c
//  Memo and Momo
/*Problem Statement:Memo and Momo are playing a game. Memo will choose a positive number 𝑎, and Momo will choose a positive number 𝑏.
 
 Your task is to tell them who will win according to the following rules:

 If both 𝑎 and 𝑏 are divisible by 𝑘, both of them win and you should print "Both".
 If 𝑎 is divisible by 𝑘 but 𝑏 isn't, Memo wins and you should print "Memo".
 If 𝑏 is divisible by 𝑘 but 𝑎 isn't, Momo wins and you should print "Momo".
 If both 𝑎 and 𝑏 are not divisible by 𝑘, no one wins and you should print "No One".
 */
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long int a,b,k;
    scanf("%lld %lld %lld",&a,&b,&k);
    if(a%k==0 && b%k==0){
        printf("Both\n");
    }
    else if (a%k==0 && b%k!=0){
        printf("Memo\n");
    }
    else if (b%k==0 && a%k!=0){
        printf("Momo\n");
    }
    else{
        printf("No One\n");
    }
    return 0;
}
