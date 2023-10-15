#include <stdio.h>



char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i = 0;
    int j = 0;
    
    while(dest[i])
    {
        i++;
    }

    while(src[j] && j < nb)
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';

    return dest;
}


int main()
{
    char string1[] = "This is ";
    char string2[] = "monke";

    ft_strncat(&string1,&string2,4);

    printf("%s", string1);
}