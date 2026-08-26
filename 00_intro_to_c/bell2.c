#include <cs50.h>
#include <stdio.h>

void ding(int n);

int main(void)
{
    ding(4);
}

void ding(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ding!\n");
    }
}
