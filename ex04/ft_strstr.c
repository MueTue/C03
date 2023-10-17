#include <stdio.h>
#include <stdbool.h>

char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j = 0;
    int k = 0;
    bool wFound = false;

    while(to_find[j])
    {
        j++;
        k++;
    }
    j = 0;

    while(str[i] && to_find[j])
    {
        if(str[i] == to_find[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
        
        if(k == j)
        {
            wFound = true;
        }
    }

    if(wFound)
    {
        while(str[i])
        {
            to_find[j] = str[i];
            i++;
            j++;
        }
        to_find[j] = '\0';
        return to_find;
    }
    else
    {
        return NULL;
    }
}


int main()
{
    char string1[] = "Monke on a bed jumping";
    char string2[] = "bed";

    char *found = ft_strstr(&string1,&string2);
    printf("%s", found);
}