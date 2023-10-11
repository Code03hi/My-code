#include <stdio.h>

void PrintArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int Partition(int * a, int low, int high)
{
    int Pivot = a[low];
    int i = low + 1;
    int c;
    int j = high;
    do
    {
        while (a[i] <= Pivot)
        {
            i++;
        }
        while (a[j] > Pivot)
        {
            j--;
        }
        if (j <= i)
        {
            c = a[j];
            a[j] = Pivot;
            Pivot = c;
        }
    } while (i < j);
    c = a[low];
    a[low] = a[j];
    a[j] = c;
    return j;
}

void Quick_Sort(int * a, int low, int high)
{
    int PartitionIndex;
    PartitionIndex = Partition(a, low, high);
    if (low < high)
    {
        Quick_Sort(a, low, PartitionIndex - 1);
        Quick_Sort(a, PartitionIndex + 1, high);
    }
}

/* void Quick_Sort(int *a, int low,int high)
{
    int PartitionIndex;
    int p = a[1];
    int q = a[n];
    int v = a[0];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j < n - i - 1; j++)
        {
            if (!(p >= v))
            {
                p = a[j];
            }
            if (!(q <= v))
            {
                q = a[j];
            }
        }
        if (p == q)
        {
            c= a[];
            a[0] = q;
            a[j]
        }
    }
} */

int main()
{
    int a[] = {3, 5, 2, 13, 12};
    int n = sizeof(a) / 4;
    printf("Before Sorting \n");
    PrintArray(a,n);
    printf("\n");
    Quick_Sort(a, 0, n-1);
    printf("After Sorting \n");
    PrintArray(a,n);
    return 0;
}