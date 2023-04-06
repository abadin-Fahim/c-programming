//
//  main.c
//  Buy expensive things
/*Problem Statement:Suppose your friend has told you that she will buy a Gucci Bag if she has 10 thousand taka or more. Otherwise if she has 5 thousand taka or more, she will buy a Levis Bag. Otherwise she will buy Something from New Market. She also told you that, if she could buy the Gucci bag and she has more than 20 thousand taka she will also buy a Gucci Belt.

Now, if you know the amount of money she has, can you tell which item/items she will buy?*/

//  Created by Joynal Abadin Fahim on 06.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int amount;
    scanf("%d",&amount);
    if(amount>=10000){
        printf("Gucci Bag\n");
        if(amount>20000){
            printf("Gucci Belt\n");
        }
    }
    else if (amount>=5000 && amount<10000){
        printf("Levis Bag\n");
    }
    else{
        printf("Something\n");
    }
    
    return 0;
}
