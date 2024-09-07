#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("Xin moi nhap vao chuoi: ");
    gets(s);

    int i=0;
    int n=0;
    int p=0;

    while(s[i] != '\0')
    {
        char c = tolower(s[i]);
        if ( c == 'a' || c == 'i' || c == 'e' || c == 'u' || c == 'o' )
        {
            n++;
        }
        else if (isalpha(c))
        {
            p++;
        }
        i++;
    }
    printf("Chuoi '%s' co chua : %d nguyen am va %d phu am. \n", s, n, p);

    return 0;
}
