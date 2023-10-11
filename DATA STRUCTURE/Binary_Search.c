#include <stdio.h>
#include <stdlib.h>

int Binary_Search(int array[], int value, int size)
{
    int found = 0;
    int high = size - 1;
    int low = 0, mid;
    mid = (low + high) / 2;
    printf("\n\n Looking for %d\n", value);
    while ((!found) && (high >= low))
    {
        printf("\n Low : %d Mid : %d High : %d \n", low, high, mid);
        if (value = array[mid])
        {
            printf("Key Value Found At Poistion %d", mid + 1);
            found = 1;
        }
        else
        {
            if (value <= array[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                mid = (low + high) / 2;
            }
        }
    }
    if (found == 1)
    {
        printf("Search Successful \n");
    }
    else
        printf("Key Value not Found \n");
}

void main()
{
    int array[100], i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter The Name : ");
        scanf("%d", &array[i]);
    }
    printf("Result of Search %d \n", Binary_Search(array, 33, 100));
    printf("Result of Search %d \n", Binary_Search(array, 75, 100));
    printf("Result of Search %d \n", Binary_Search(array, 1, 100));
}