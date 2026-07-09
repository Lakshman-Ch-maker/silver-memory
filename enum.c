//
// Created by chint on 05/09/2025.
//

#include<stdio.h>
int main()
{
    enum planet
    {
        Mercury = 13,
        Venus,
        Earth,
        Mars,
        Jupiter,
        Saturn,
        Neptune,
        Pluto
    };
    enum planet pl;
    pl = Earth;
    printf("%d\n", pl);
    printf("Hello World");
    return 0;
}