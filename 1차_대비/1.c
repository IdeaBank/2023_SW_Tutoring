#include <stdio.h>

int input(int *p);
int *sel_next(int *p);
int number(int *p, int *q);

int main()
{
    int arr[100] = { 0 }, count;
    int *p;

    count = input(arr);

    for(p = arr; p < arr + count; p++)
    {
        int *next = sel_next(p);

        printf("%d\n", number(p, next));

        if(*(next + 1) == -1)
            break;

        p = next - 1;
    }

    return 0;
}

int input(int *p)
{
    int *p_p;

    for(p_p = p; ; p_p++)
    {
        scanf("%d", p_p);

        if(*(p_p) == -1)
            return p_p - p;
    }

    return -1;
}

int *sel_next(int *p)
{
    int diff = *p - *(p+1);
    int *result = p + 1;

    if(diff > 0)
        while(*result - *(result + 1) > 0)
            result += 1;

    else
        while(*result - *(result + 1) < 0)
            result += 1;

    if(*result == -1)
        return result - 1;

    return result;
}

int number(int *p, int *q)
{
    int result = 0;

    while(p <= q)
    {
        result *= 10;
        result += *p;
        p += 1;
    }

    return result;
}