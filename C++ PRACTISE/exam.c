#include <stdio.h>

int main()
{
    int n;
    for (int i = 1; i < 5; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    printf("  ");
    for (int j = 5; j < 8; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    printf("    ");
    for (int k = 8; k < 10; k++)
    {
        printf("%d ", k);
    }
}