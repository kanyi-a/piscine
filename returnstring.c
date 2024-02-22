//Write a function that returns the length of a string.
//#include <stdio.h>

int	ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
         i++;
    return (i);
}
int main(void)
{
    char mystring[] = "hello,angela";
    int length = ft_strlen(mystring);
    return length;
}