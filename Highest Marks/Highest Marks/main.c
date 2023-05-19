//
//  main.c
//  Highest Marks
//Problem Statement: There are N students in a class. Recently they got their Math course marks. One of them got the highest marks. So now they want to know how much more marks they need to get the highest mark. Can you calculate for every student what is the difference between their marks and the highest marks and print them!
//  Created by Joynal Abadin Fahim on 19.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int marks[n];
    int highest_mark=0;
    for (int i=0; i<n; i++) {
        scanf("%d",&marks[i]);
        if(marks[i]>highest_mark){
            highest_mark = marks[i];
        }
    }
    
    for (int i=0; i<n; i++) {
        int marks_difference = highest_mark-marks[i];
        printf("%d ",marks_difference);
    }
    printf("\n");
}
    
    
    
    
    
    
    
    
    
    
    
