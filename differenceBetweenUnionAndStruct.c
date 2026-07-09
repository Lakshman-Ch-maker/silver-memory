//
// Created by chint on 05/09/2025.
//

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
        int Mer;
        char name[30];
    };
    union planet p;
    printf("Size of Union in union: %ld \n", sizeof(union planet));
    printf("Address of int in union: %zu \n", &p.Mer);
    printf("Address of char in union: %zu \n", &p.name);
    struct pla
    {
        int m;
        char nam[30];
    };
    struct pla pl;
    printf("Size of struct is combined: %ld \n", sizeof(struct pla));
    printf("Address of int in struct: %zu \n", &pl.m);
    printf("Address of char in struct: %zu \n", &pl.nam);
    return 0;
}