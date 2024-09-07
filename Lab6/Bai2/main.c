#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Phan tu thu %d: ", i+1);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    for(i=0; i<n; i++)
    {
        if(mang[i] > max)
        {
            max = mang[i];
        }
    }

    int min = mang[0];
    for(i=0; i<n; i++)
    {
        if(mang[i] < min)
        {
            min = mang[i];
        }
    }

    printf("Gia tri nho nhat cua mang la: %d\n", min);
    printf("Gia tri lon nhat cua mang la: %d\n", max);


    return 0;
}
