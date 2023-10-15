#include <stdio.h>

int main()
{
    char str[10] = { 'H' };

    int *p = (int *)(str + 1);

    *p = 0b01101111011011000110110001100101;

    printf("%s\n", str);
}