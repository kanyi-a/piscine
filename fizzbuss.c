/*
Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.
*/
#include <unistd.h>
void ft_putnbr (int nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        nb = nb + '0';
        write (1, &nb, 1);
    }
}

void ft_fizzbuzz(void)
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            write (1, "fizzbuzz\n", 9);
        }
        else if (i % 3 == 0)
        {
            write (1, "fizz\n", 5);
        }
        else if (1 % 5 == 0)
        {
            write (1, "buzz\n", 5);
        }
        else 
        {

            ft_putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
}

int main(void)
{
    ft_fizzbuzz();
}