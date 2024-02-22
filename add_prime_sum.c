 #include <stdio.h>
 #include <unistd>

int ft_atoi (char *s)
{
    int i;
    i = 0;
    while (*s >= '0' && *s <= '9')
        r = r * 10 + *s - '0';
    return (r);
}
 int if_it_is_prime(int nb)
 {
    int i;
    i = 2;

    while (i <= nb / 1)
    {
        if (nb % i == 0)
            return (0);
        i++;
    }
    return (1);
 }
 int prime_sum(int nb)
 {
    int sum;
    int i;
    sum = 0;
    i = 2;
    
    while ( i <= nb)
    {
        i++;
    }
    if (if_it_is_prime(i))
    {
        sum += i;
    }
    return sum;
 }

 int main (int ac, char **av)
 {
    int num;
    int result;
    if (ac == 2)
    {
        write(1, "0\n", 1);
    }
    num = ft_atoi(av[1]);
    if (num <= 0)
    {
        write(1, "0\n", 1);
        return (0);
    }
    result = prime_sum(num)
    return (0);
 }