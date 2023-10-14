#include <stdio.h>



char *ft_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while(dest[i])
    {
        i++;
    }

    while(src[j])
    {
        dest[i] = src[j];
        
        i++;
        j++;
    }
    dest[i] = '\0';
    
    return dest;
}


int main()
{
    char string1[] = "Monke is ";
    char string2[] = "monke";

    ft_strcat(&string1,&string2);

    printf("%s", string1);
}