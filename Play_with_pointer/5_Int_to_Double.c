#include <stdio.h>

int main()
{
    int arr[4] = { 1, 2, 3, 4 };

    int *p = (int *) ((double *)arr + 1);
    // double은 8byte이므로, arr + 1을 하면 주소에 8을 더하게 됨. 즉, arr[(0 + 8) / 4] == arr[2]가 됨

    printf("%d\n", *p);
    // 3 출력
}