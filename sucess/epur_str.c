/*
Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

If the number of arguments is not 1, or if there are no words to display, the
program displays \n.
*/

#include <unistd.h>

int ft_strlen(char *s)
{
    int i;
    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

int is_blank(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    if (c >= 9 && c <= 13)
        return (1);
    return (0);
}

void epurstr(char *str)
{
    int len;
    len = ft_strlen(str);
    while (len && is_blank(str[len - 1]))
    --len;
    while (len && is_blank(*str) && *str++);
    --len;
    while (len --)
    {
        if (!is_blank(*str) || (*(str + 1) && !is_blank(*(str + 1))))
        {
                write (1, str, 1);
        }
        str++;
    }
}
int main (int ac, char **av)
{
    if (ac == 2 && *av[1])
    {
        epurstr(av[1]);
    }
    write (1, "\n", 1);
    return (0);
}