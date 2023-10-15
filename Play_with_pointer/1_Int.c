#include <stdio.h>

int main()
{
    int a = 1;
    int *b = &a;

    printf("%d\n", *b);

    int *c = &a;
    c = c + 1;

    printf("%d\n", a);

    c = &a;
    *c = *c + 1;

    printf("%d\n", a);
}