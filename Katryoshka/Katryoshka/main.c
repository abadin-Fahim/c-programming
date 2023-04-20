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
    long long int n,m,k;
    scanf("%lld %lld %lld",&n,&m,&k);
    long long int count =0;
    
    if (n == 0 || k == 0) {
        printf("0\n");
    }
    else{
        long long int  min = n;
        if (m < min) {
            min = m;
        }
        if (k < min) {
            min = k;
        }
        n -= min;
        m -= min;
        k -= min;
        count += min;
        if (n/2 < k) {
            count += n/2;
            
        }
        else{
            count += k;
        }
        printf("%lld\n",count);
    }
    
        
    return 0;
}
