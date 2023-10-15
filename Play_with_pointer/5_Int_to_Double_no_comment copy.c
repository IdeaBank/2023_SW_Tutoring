#include <stdio.h>

int main()
{
    int arr[4] = { 1, 2, 3, 4 };

    int *p = (int *) ((double *)arr + 1);

    printf("%d\n", *p);
}