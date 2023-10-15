#include <stdio.h>

void fun1(int a);
void fun2(int* a);

int main()
{
    int a = 1;

    fun1(a);
    printf("%d\n", a);
    
    fun2(&a);
    printf("%d\n", a);
}

void fun1(int a)
{
    a = a + 1;
}

void fun2(int* a)
{
    *a = *a + 1;
}