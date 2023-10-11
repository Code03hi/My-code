#include<stdio.h>

void PrintArray(int * a,int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insertion_Sort(int * a,int n)
{
    int key,j;
    // Loop For passes
    for (int i = 1; i <= n-1; i++)
    {
        key = a[i];
        j=i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
    
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n=6;
    printf("Before Sorting \n");
    PrintArray(a,n);
    insertion_Sort(a,n);
    printf("After Sorting \n");
    PrintArray(a,n);
    return 0;
}