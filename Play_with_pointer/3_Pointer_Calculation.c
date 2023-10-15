#include <stdio.h>

int main()
{
    char a;
    
    int b;
    long long int c;

    float d;
    double e;

    char *f = &a + 1;

    int *g = &b + 1;
    long long int *h = &c + 1;

    float *i = &d + 1;
    double *j = &e + 1;

    printf("%d %d\n", f, &a);
    printf("%d %d\n", g, &b);
    printf("%d %d\n", h, &c);
    printf("%d %d\n", i, &d);
    printf("%d %d\n", j, &e);

    printf("char: %ld\n", (char*)f - (char*)(&a));
    printf("int: %ld\n", (char*)g - (char*)(&b));
    printf("long long int: %ld\n", (char*)h - (char*)(&c));
    printf("float: %ld\n", (char*)i - (char*)(&d));
    printf("double: %ld\n", (char*)j - (char*)(&e));
}