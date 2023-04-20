//
//  main.c
//  Do The Same
/*Problem Statement: You will be given two positive integer N and K. You need to print from 1 to N, and you need to do this K times.
 
 Please look at the sample input output.


 */
//  Created by Joynal Abadin Fahim on 20.04.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,k;
    scanf("%d %d",&n,&k);
    for (int j=1; j<=k; j++) {
        for (int i=1; i<=n; i++) {
            printf("%d ",i);
        }
        printf("\n");
    }
    
        
    return 0;
}
