#include <stdio.h>


int ft_strcmp(char *s1, char *s2)
{
    int i = 0;

    while(s1[i] || s2[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if(s1[i] < s2[i])
            {
                return -1;
            }

            if(s1[i] > s2[i])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    char string1[] = {"This is m"};
    char string2[] = {"This is monke"};

    printf("%d", ft_strcmp(&string1,&string2));
}
