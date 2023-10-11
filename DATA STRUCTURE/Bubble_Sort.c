#include <stdio.h>

void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int a, int b)
{
}

void Bubble_Sort(int *a, int n)
{
    int c;
    int IsSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        IsSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                IsSorted = 0;
            }
        }
    }
    if (IsSorted)
    {
        return;
    }
    printf("\n");
}

void Bubble_Sort_Adaptive(int *a, int n)
{
    int c;
    int IsSorted = 0;
    for (int i = 0; i < n - 1; i++)
    {
        printf("Working on pass Array %d \n", i + 1);
        IsSorted = 1;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                IsSorted = 0;
            }
        }
    }
    if (IsSorted)
    {
        return;
    }
    printf("\n");
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printf("Before Sorting \n");
    printArray(a, n);
    Bubble_Sort(a, n);
    printf("After Sorting \n");
    printArray(a, n);
    return 0;
}