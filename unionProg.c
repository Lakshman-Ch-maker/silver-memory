//
// Created by chint on 05/09/2025.
//

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    union planet
    {
        char name;
        int Mer;

    };
union planet p;
    printf("Size of Union: %ld \n", sizeof(union planet));
    printf("Address of int in union: %zu \n", &p.Mer);
    printf("Address of char in union: %zu \n", &p.name);


    // We can use a variable of Union one at a time
    printf("\n Enter a num: ");
    scanf("%d", &p.Mer);
    printf("\n num is: %d \n", p.Mer);
    printf("\n Enter a character: ");
    scanf(" %c", &p.name);
    printf("\n char is: %c \n", p.name);

    return 0;
}