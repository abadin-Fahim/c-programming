//
//  main.c
//  Search Engine!
/*Problem Statement:You are given a list of numbers. Now find the position of a specific number from the list; if the number is not found in the given list then you have to print Not Found.

Note: Find the first occurence of that number from left.
 */
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int find_number_position(int values[], int size, int target){
    for (int i=0; i<size; i++) {
        if(values[i]==target){
            return i+1;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int test_case;
    scanf("%d",&test_case);
    for (int i=1; i<=test_case; i++){
        int size;
        scanf("%d",&size);
        int values[size];
        for (int j=0; j<size; j++) {
            scanf("%d",&values[j]);
        }
    
        int need_to_find;
        scanf("%d",&need_to_find);
        int position = find_number_position(values,size,need_to_find);
        if(position != -1){
            printf("Case %d: %d\n",i,position);
        }
        else{
            printf("Case %d: Not Found\n",i);
        }
    }
    return 0;
}
