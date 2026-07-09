//
// Created by chint on 27/08/2025.
//

#include<stdio.h>
#include<stdlib.h>
static int c=0, in = 0;

void printArray(int arr[], int size, const char* st)
{
    printf("\n %s :\t", st);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertionSort(int arr[], int n) // O(n^2)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            --prev;
            c++;
        }
        arr[prev + 1] = curr;
        in++;
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
    insertionSort(a, n);
    printArray(a, n, "\n After Insertion Sort The elements of Array in ascending order are:\n Array:");

    printf("\n Number of swaps are: %d", c);
    printf("\n Number of insertions are: %d", in);
    free(a);
}