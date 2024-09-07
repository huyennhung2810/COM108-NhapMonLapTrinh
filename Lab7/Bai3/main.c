#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[5][20];
    int i, j;
    char temp[20];

    for (i=0; i<5; i++)
    {
        printf("Nhap chuoi thu %d: ", i+1);
        gets(s[i]);
    }

    for(i=1; i<5; i++)
    {
        for(j = i+1; j<5; j++)
        {
            if (strcmp(s[i], s[j]) > 0)
            {
                strcpy (temp, s[i] );
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("Chuoi da sap xep : \n");
    for(i=0; i<5; i++)
    {
        printf("%s\n", s[i]);
    }

    return 0;
}
