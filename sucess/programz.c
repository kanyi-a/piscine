//Write a program that displays a 'z' character on the standard output.
#include <unistd.h>

    int main(void)
    {
        write(1, "z", 1);
        return (0);
    }