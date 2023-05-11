//
//  main.c
//  Lucky Array
/*Problem Statement:Given a number N and an array A of N numbers. Determine if the array is lucky or not.

Note: the array is lucky if the frequency (number of occurrence) of the minimum element is odd.
 */
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i=0; i<n; i++) {
        scanf("%d",&ar[i]);
    }
    int count=0;
    int min=ar[0];
    for (int i=0; i<n; i++) {
        
        if(ar[i]<min){
            min=ar[i];
        }
        
    }
    for (int i=0; i<n; i++) {
        if(ar[i]==min){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky\n");
    }
    
    return 0;
}
