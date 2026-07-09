//
// Created by chint on 27/08/2025.
//

#include<stdio.h>
#include<stdlib.h>
static int c=0;

void swap(int *a, int *b)
{
    c++;
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size, const char* st)
{
    printf("\n %s :\t", st);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void bubbleSort(int arr[], int size) // )(n^2)
{
    for (int i = 0; i < size-1; i++)
    {
        int count = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                count++;
            }
        }
        if (count == 0)
            break;
    }
}

void main()
{
    int n, i;

    printf("\n Enter the numbers of elements : ");
    scanf("%d",&n);
    int *a  = (int *)malloc( n * sizeof(int) );
    if (a == NULL)
    {
        printf("\n Allocation Failed");
        return -1;
    }
    printf("\n Enter the Elements of Array : ");
    for (i=0; i<n; i++)
    {
        printf("\t arr[%d]= ", i+1);
        scanf("%d", a+i);
    }

    printArray(a, n, "\n Entered Elements of Array are:\n Array:");
    bubbleSort(a,n);
    printArray(a, n, "\n After Bubble Sort The elements of Array in ascending order are:\n Array:");

    printf("\n Numer of swappings are: %d", c);

    free(a);
}