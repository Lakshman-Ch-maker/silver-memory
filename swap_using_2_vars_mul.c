//
// Created by chint on 27/08/2025.
//
//
// Created by chint on 27/08/2025.
//

#include<stdio.h>

int main()
{
    int a,b;
    printf("\n Enter two numbers a and b :");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("\n Before Swapping a = %d and b = %d \n", a, b);

    a = a*b;        // swapping using addition
    b=a/b;
    a = a/b;
    printf("\n After Swapping a = %d and b = %d \n", a, b);

    return 0;
}