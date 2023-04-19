//
//  main.c
//  Searching
/*
 Problem Statement: Given a number N and an array A of N numbers. Determine if the number X exists in array A or not and print its position (0-index).
 
 Note: X may be found once or more than once and may not be found.
 */
//  Created by Joynal Abadin Fahim on 19.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ary[n];
    
    
    for (int i=0; i<n; i++) {
        scanf("%d",&ary[i]);
    }
    int x;
    scanf("%d",&x);
    int ans=-1;
    for (int i=0; i<n; i++) {
        if(ary[i]==x){
            ans = i;
            break;
        }
    }
        
    printf("%d\n",ans);
    
    return 0;
}
