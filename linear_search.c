//
// Created by chint on 27/08/2025.
//

// c program for linear search for multiple findings
#include<stdio.h>
#include<stdlib.h>

void printArray(int arr[], int size, const char* st)
{
    printf("\n %s :\t", st);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void linearSearch(int a[], int f, int n)
{
    int i, c=0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == f)
        {
            printf("\n Element Found at index %d", i+1);
            c++;
        }
    }
    if (c == 0)
        printf("\n Element Not Found");
}


int main()
{

    int i, n, f, pos;
    printf("\n Enter the size of the array :");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    printf("\n Enter the Array Elements :");
    for (i = 0; i < n; i++)
    {
        printf("\t arr[%d] = ", i+1);
        scanf("%d", &a[i]);
    }

    printArray(a, n, "\n  The entered elements are: ");

    printf("\n Enter the element you want to search: ");
    scanf("%d", &f);
    linearSearch(a, f, n);

    free(a);
    return 0;
}