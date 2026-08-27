#include <stdio.h>

int main(void)
{
    int n = 2334943;
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    printf("%i\n", count);
}
