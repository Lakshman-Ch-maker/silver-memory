//
// Created by chint on 05/09/2025.
//

#include<stdio.h>

struct student
{
    int rollNo;
    char name[20];
    float score;
};
int main()
{
    struct student s;
    struct student *ptr;
ptr = &s;
    printf("\n Enter student Roll Number: ");
    scanf("%d", &ptr->rollNo);
    printf("\n Enter student Name: ");
    scanf("%s", ptr->name);
    printf("\n Enter student Score: ");
    scanf("%f", &ptr->score);

    printf("\n Student Roll Number is: %d", ptr->rollNo);
    printf("\n Student Name is: %s", ptr->name);
    printf("\n Student Score: %.2f", ptr->score);

    return 0;
}