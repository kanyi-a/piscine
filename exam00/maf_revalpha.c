#include <unistd.h>
int main(void)
{
    int a;
    int b;

    a = 'a';
    b = 'B';
    while (b <= 2)
    {
        write (1, &a, 1);
        write (1, &b, 1);
        a += 2;
        b += 2;

        write (1, "\n", 1);
        return (0);
    }

}