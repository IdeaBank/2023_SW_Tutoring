#include <stdio.h>

int main()
{
    int arr[2] = { 0b00000001000000100000001100000100, 0b00000101000001100000011100001000 };

    char *b = (char *)(arr);

    char *c = b + 1;
    char *d = b + 2;
    char *e = b + 3;

    printf("%d %d %d %d\n", *b, *c, *d, *e);

    *b = 119;
    *c = 54;
    *d = 112;
    *e = 1;

    printf("%d\n", arr[0]);
}