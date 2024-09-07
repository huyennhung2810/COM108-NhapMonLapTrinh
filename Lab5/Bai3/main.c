#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    printf("Nhap gia tri b: ");
    scanf("%d", &b);

    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);

    return 0;
}
