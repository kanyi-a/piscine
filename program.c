/*Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.*/

#include <unistd.h>

int main (int argc, char **argv) //Entry point(argumentscount&vector
{
    if (argc != 2) //if there are not exactly two arguments it esxecutes this cod
    {
        write(1, "z\n", 2);
        return 1;
    }
    char *str = argv[1];
    while (*str != '\0')
    {
        if(*str == 'z')
        {
            write(1, "z\n", 2);
            return (0);
        }
        str++;
    }
    write(1, "z\n", 2);
    return 0;
}
/*without using argc && argv
#include <unistd.h>

int		main(void)
{
	write(1, "z", 1);
	write(1, "\n", 1);
	return (0);
}
*/