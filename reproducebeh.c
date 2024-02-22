//Reproduce the behavior of the function strcpy (man strcpy).
#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = s2[i];
    return (s1);
}

int main (void)
{
    char str1[] = "harry";
    char str2[] = "potter";

  
    ft_strcpy(str1,str2);


    return (0);
}