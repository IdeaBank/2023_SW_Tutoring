#include <stdio.h>

int main()
{
    char a;
    
    int b;
    long long int c;

    float d;
    double e;

    char *f;

    int *g;
    long long int *h;

    float *i;
    double *j;


    printf("%lu %lu %lu %lu %lu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(e));
    printf("%lu %lu %lu %lu %lu\n", sizeof(f), sizeof(g), sizeof(h), sizeof(i), sizeof(j));
}