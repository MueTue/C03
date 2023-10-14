#include <stdio.h>



int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i = 0;

    while(i < n && s1[i] || s2[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
        {
            if(s1[i] < s2[i])
            {
                return 1;
            }

            if(s1[i] > s2[i])
            {
                return -1;
            }
        }
    }
    return 0;
}


int main()
{
    char string1[] = "Monkemod";
    char string2[] = "Monkemod";

    printf("%d", ft_strncmp(&string1,&string2,28));
}