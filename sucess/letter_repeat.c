/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.*/
#include <unistd.h>

int letter_count(char c)
{
    int repeat;

    if (c >= 'A' && c <= 'Z')
        repeat = c - 'A' + 1;
    else if (c >= 'a' && c <= 'z')
        repeat = c - 'a' + 1;
    else
        repeat = 1;
    return(repeat);
}

int main(int argc, char **argv)
{
    int repeat;

    if (argc == 2)
    {
        while(*argv[1])
        {
            repeat = letter_count(*argv[1]);
            while (repeat--)
            {
                write(1, argv[1], 1);
            }
            argv[1]++;
        }
    }
    
   write(1, "\n", 1);
   return(0);
}
