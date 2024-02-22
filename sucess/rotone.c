#include <unistd.h>
void putchar(char c)
{
    write (1, &c, 1);
}
void rotone (char *s)
{
    while (*s)
    {
        if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
            putchar(*s + 1);
        else if (*s == 'Z' || *s == 'z')
            putchar(*s - 25);
        else
            putchar(*s);
        ++s;
    }
}

int main (int ac , char *av[])
{
    if (ac == 2)
        rotone(av[1]);
    putchar('\n');
    return(0);
}