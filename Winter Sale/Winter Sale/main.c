//
//  main.c
//  Winter Sale
/*
 Problem Statement: The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of 𝑋% and its price 𝑃 after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!
 */
//  Created by Joynal Abadin Fahim on 11.05.23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int discount,discount_price;
    scanf("%d %d",&discount,&discount_price);
    float orginal_price = (float)(100*discount_price)/(100-discount);
    printf("%.2f\n",orginal_price);
    return 0;
}
