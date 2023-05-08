//
//  main.c
//  Pass_by_value
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>

void increment(int x){
    x+=5;
}

int main(int argc, const char * argv[]) {
    int num = 3;
    increment(num);
    printf("%d\n",num);
    
    return 0;
}
