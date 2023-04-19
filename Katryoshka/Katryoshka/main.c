//
//  main.c
//  Katryoshka
/*
 Problem Statement : The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:
 
 1.Two eyes and one body.
 2.Two eyes, one mouth, and one body.
 3.One eye, one mouth, and one body.
 If the king has 𝑛 eyes, 𝑚 mouths and 𝑘 bodies, what is the largest number of Katryoshkas he can make?
 */
//  Created by Joynal Abadin Fahim on 18.04.23.
//

#include <stdio.h>
 
int main(int argc, const char * argv[]) {
    long long  n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long count =0;
    
        while (n>=1 && m >=1 && k>=1) {
            n -=1;
            m -=1;
            k -=1;
            count++;
        }
        while (n>=2 && k>=1) {
            n -=2;
            k -=1;
            count++;
        }
        printf("%lld\n",count);

        
    
    return 0;
}
