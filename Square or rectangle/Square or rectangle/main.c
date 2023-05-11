//
//  main.c
//  Square or rectangle
//Problem Statement: Given the width and the height of a shape determine whether it's for a square or a rectangle?
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int test_case;
    scanf("%d",&test_case);
    int width,height;
    for (int i=0; i<test_case; i++) {
        scanf("%d %d", &width, &height);
        if(width == height){
            printf("Square\n");
        }
        else{
            printf("Rectangle\n");
        }
    }
    
    return 0;
}
