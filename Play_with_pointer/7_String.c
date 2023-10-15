#include <stdio.h>

int main()
{
    char str[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j' };
    char str2[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };

    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str2 + 1);
}