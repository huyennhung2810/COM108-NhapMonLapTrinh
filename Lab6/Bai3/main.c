#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];
    int i, j;
    for(i=0; i<n; i++)
    {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    for(i=0; i<n-1 ; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(mang[j] < mang[j+1])
            {
                int temp = mang[j];
                mang[j] = mang[j+1];
                mang[j+1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep giam dan: \n");
    for(i=0; i<n; i++)
    {
        printf("Vi tri thu mang[%d] la: %d\n", i, mang[i]);
    }

    return 0;
}
