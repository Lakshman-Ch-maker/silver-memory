//
// Created by chint on 27/08/2025.
//

#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
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

void selectionSort(int arr[], int size) // O(n^2)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        int min = i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]>arr[min]) // for greater than
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&arr[i], &arr[min]);
        }
    }
}


int main()
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

    selectionSort(a, n);

    printArray(a, n, "\n After Selection Sort The elements of Array in descending order are:\n Array:");


free(a);
    return 0;
}