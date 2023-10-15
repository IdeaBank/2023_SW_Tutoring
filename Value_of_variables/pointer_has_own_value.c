#include <stdio.h>

int main()
{
    int *a;
    char *b = &a;
    char *c = b + 1;
    char *d = c + 1;
    char *e = d + 1;

    *b = 0b00000011;
    *c = 0b00000010;
    *d = 0b00000001;
    *e = 0b00000000;

    printf("%d\n", a);
}