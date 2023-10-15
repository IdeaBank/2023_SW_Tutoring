#include <stdio.h>

int main()
{
    char str[10] = { 0 };
    int *a = (int *)str;

    *a = 1953719636;

    printf("%s\n", str);
}