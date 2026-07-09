//
// Created by chint on 27/08/2025.
//

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

int isSorted(int arr[], int size)
{
    int as=0, ds=0, lim = size-1;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i+1])
            ds++;
        else if (arr[i] < arr[i+1])
            as++;
        else
            lim--;
    }
    if (as == lim)
        return 0;
    else if (ds == lim)
        return 1;
    else
        return -1;
}


void binarySearchAsc(int a[], int n, int key, int low, int high) // O(logn)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == a[mid])
        {
            printf("\n Key is found at index %d \n", mid+1);
        }
        else if (key < a[mid])
        {
            binarySearchAsc(a, n, key, low, mid-1);
        }
        else
        {
            binarySearchAsc(a, n, key, mid+1, high);
        }
    }
    else
    printf("\n Key is NOT found \n ");
}

void binarySearchDes(int a[], int n, int key, int low, int high) //O(logn)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == a[mid])
        {
            printf("\n Key is found at index %d \n", mid+1);
        }
        else if (key < a[mid])
        {
            binarySearchAsc(a, n, key, mid+1, high);
        }
        else
        {
            binarySearchAsc(a, n, key, low, mid-1);
        }
    }
    else
    printf("\n Key is NOT found \n ");
}

int main()
{
    int i, n, f;
    printf("\n Enter the size of the array :");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));

    printf("\n Enter the Array Elements :");
    for (i = 0; i < n; i++)
    {
        printf("\t arr[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    printArray(a, n, "\n The entered elements are: ");
    int res = isSorted(a, n);
    if (res == 1)
    {
        printArray(a, n, "\n The array is sorted in descending order");
        printf("\n enter key (element) to search: ");
        scanf("%d", &f);
        binarySearchDes(a, n, f, 0, n-1);

    }
    else if (res == 0)
    {
        printArray(a, n, "\n The array is sorted in ascending order");
        printf("\n enter key (element) to search: ");
        scanf("%d", &f);
        binarySearchAsc(a, n, f, 0, n-1);
    }
    else
        printArray(a, n, "\n The array is neither in ascending order nor in descending order \n To search an element using Binary Search it should be in either ascending or descending order");

    return 0;
}