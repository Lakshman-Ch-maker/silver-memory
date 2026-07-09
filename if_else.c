//
// Created by chint on 27/08/2025.
//

#include<stdio.h>

int main()
{
    int i,n;
    int d = 29;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    if (n < 5)
        d = 20;
    else
    {
        d = 47;
    }
    printf("%d", d);

    return 0;
}