#include <stdio.h>

void PrintArray(int *c, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
}

void Merge_Sort(int *a, int *b, int *c, int m, int n)
{
    int i, j, k;
    i = j = k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k] = a[i];
            i++;
            k++;
        }
        if (a[i] > b[j])
        {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < m)
    {
        c[k] = a[i];
    }
    while (j < n)
    {
        c[k] = b[j];
    }
}

int main()
{
    int a[] = {2, 3, 6, 7};
    int b[] = {8, 9, 10, 11};
    int m = sizeof(a) / 4;
    int n = sizeof(b) / 4;
    int o = m + n;
    int c[o];
    Merge_Sort(a, b, c, m, n);
    PrintArray(c, n);
    int k[n];
}