#include <cs50.h>
#include <stdio.h>
float average(int size, int array[]);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }

    printf("%f\n", average(N, scores));
}

float average(int size, int array[])
{
    total = 0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total / (float) size;
}
