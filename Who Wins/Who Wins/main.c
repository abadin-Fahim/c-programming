//
//  main.c
//  Who Wins
/*
 Problem Statement: Tiger and Pathan are bored with movies and want to play a game. They will play the game in N round. Each time, both of them will guess a number X1 and X2, and whoever guesses the larger number will win that round. The final winner will be the one who wins the most rounds. In the event that they both win an equal number of times, the game will end in a draw.
 */
//  Created by Joynal Abadin Fahim on 12.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,tiger_score=0,pathan_score=0;
    scanf("%d",&n);
    int x1,x2;
    for (int i=0; i<n; i++) {
        
        scanf("%d %d",&x1,&x2);
        if(x1>x2){
            tiger_score++;
        }
        else if(x1<x2){
            pathan_score++;
        }
    }
    if(tiger_score>pathan_score){
        printf("Tiger\n");
    }
    else if(tiger_score<pathan_score){
        printf("Pathan\n");
    }
    else{
        printf("Draw\n");
    }
    return 0;
}
