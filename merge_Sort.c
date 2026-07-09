//
// Created by chint on 27/08/2025.
//
/* C program for Merge Sort */

#include<stdio.h>
#include<stdlib.h>

void merge(int a[], int l, int mid, int h);
void mergeSort(int a[], int l, int h);

int main()
{
    int n;
    printf("\n Enter number for MergeSort: ");
    scanf("%d", &n);

    int *a = (int*)malloc(n*sizeof(int));
    printf("\n Enter Array Elements: ");
    for(int i=0;i<n;i++)
    {
        printf("\n Enter Array Element[%d]: ", i+1);
        scanf("%d", a+i);
    }

    printf("\n The Entered elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("\t %d", *(a+i));
    }

    mergeSort(a, 0, n-1);

    printf("\n The elements after MergeSort are: ");
    for(int i=0;i<n;i++)
    {
        printf("\t %d", *(a+i));
    }

    free(a);

    return 0;
}

void mergeSort(int a[], int l, int h)
{
    if(l<h)
    {
        int mid = l + (h-l)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, h);
        merge(a, l, mid, h);
    }
}

void merge(int a[], int l, int mid, int h)
{
    if (l==h)
    {
        return;
    }

    int i=l,j = mid+1, temp[h], k = 0, m,n;

    while (i <= mid && j <= h)
    {
        if (a[i] > a[j])
        {
            temp[k++] = a[j++];

        }
        else if (a[i] <= a[j])
            {
            temp[k++] = a[i++];

            }

    }


        while(j<=h)
        {
            temp[k++] = a[j++];
        }


        while(i<=mid)
        {
            temp[k++] = a[i++];
        }


    for (m=0, n=l; m<k, n<=h; m++, n++)
    {
        a[n] = temp[m];
    }
}