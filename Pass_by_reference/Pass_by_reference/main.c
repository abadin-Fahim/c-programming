//
//  main.c
//  Pass_by_reference
//
//  Created by Joynal Abadin Fahim on 08.05.23.
//

#include <stdio.h>
void decrement(int *p){
    *p-=5;
}

int main(int argc, const char * argv[]) {
    int num = 50;
    decrement(&num);
    printf("%d\n",num);
    
    return 0;
}
