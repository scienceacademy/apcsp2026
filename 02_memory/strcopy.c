#include <stdio.h>
#include <string.h>

int main()
{
    char *s = "hi!";

    char *t = malloc(strlen(s) + 1);
    for (int i = 0, n=strlen(s); i < n+1; i++)
    {
        t[i] = s[i];
    }
    free(t);
}
