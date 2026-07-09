//
// Created by chint on 28/08/2025.
//

#include<stdio.h>
#include<stdlib.h>


int merge(int a[], int l, int mid, int h)
{
    int c = 0;
    if (l == h)
    {
        return c;
    }

    int i = l, j = mid + 1, k = 0, m, n;
    int* temp = (int*)malloc((h - l + 1) * sizeof(int));

    while (i <= mid && j <= h)
    {
        if (a[i] > a[j])
        {
            temp[k++] = a[j++];
            c += (mid - i + 1);  // ✅ Count of remaining elements in left half
        }
        else if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
        }
    }
    while (j <= h)
    {
        temp[k++] = a[j++];
    }


    while (i <= mid)
    {
        temp[k++] = a[i++];
    }


    for (m = 0, n = l; m < k && n <= h; m++, n++)  // ✅
    {
        a[n] = temp[m];
    }
    if (temp != NULL)
    free(temp);
    return c;
}

int mergeSort(int a[], int l, int h)
{
    int co = 0;
    if (l >= h)
    {
        return co;
    }
    int mid = l + (h - l) / 2;
    co += mergeSort(a, l, mid);
    co += mergeSort(a, mid + 1, h);
    co += merge(a, l, mid, h);

    return co;
}


int main()
{
    int n;
    printf("\n Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("\n Enter %d array: ", i);
        int a, c;
        scanf("%d", &a);
        int* arr = (int*)malloc(a * sizeof(int));
        for (int j = 0; j < a; j++)
        {
            scanf("%d", &arr[j]);
        }
        c = mergeSort(arr, 0, a - 1);
        printf("\n Inversions: %d \n", c);
        free(arr);
    }
}
