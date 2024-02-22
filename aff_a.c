/*Write a program that takes a string, and displays the first 'a'
character it encounters in it, followed by a newline. If there are no
'a' characters in the string, the program writes 'a' followed
by a newline. If the number of parameters is not 1, the program displays
'a' followed by a newline.*/

#include <unistd.h>

int main(int argc ,char **argv)
{
    if (argc != 2)
    {
        write (1, "a\n", 2);
        return (1);
    }
    char *str = argv[1];
    while (*str != '\0')
    {
        if (*str == 'a')
        {
            write(1, "a\n", 2);
            return (0);
        }
        str++;
    }
    write(1, "a\n", 2);
    return (0);
}