#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Type a positive integer: ");
    }
    while (n < 0);

}
