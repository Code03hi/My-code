#include <stdio.h>

void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void MergeSort(int *,int,int);

void Merge_Sort(int a[], int low, int high, int mid)
{
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;
    int b[100];
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            k++;
            i++;
        }
        if (a[i] > a[j])
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        b[k] = a[i];
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        j++;
    }
    MergeSort(a,low,high);
    for (int i = low; i < high; i++)
    {
        a[i]=b[i];
    }
}

void MergeSort(int * a,int low,int high)
{
    int mid;
    if (low<high)
    {
        mid = (low+high)/2;
        MergeSort(a,low,mid);
        MergeSort(a,mid+1,high);
        Merge_Sort(a,low,high,mid);
    }
}

int main()
{
    int a[] = {25, 65, 89, 45, 55, 66};
    int n = sizeof(a) / 4;
    int mid = (0 + n) / 2;
    PrintArray(a,n);
    Merge_Sort(a, 0, n, mid);
    PrintArray(a,n);
}