#include <stdio.h>

void print_histogram()
{
}

int main()
{

    int c;

    int digits[127];

    for (int i = 0; i < 128; ++i)
    {
        digits[i] = 0;
    }

    while ((c = getchar()) != EOF)
    {
        if (c > -1 && c < 128)
        {
            ++digits[c];
        }
    }
    for (int i = 0; i < 128; ++i)
    {
        printf("%c: %d\n", i, digits[i]);
    }
}