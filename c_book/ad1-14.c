#include <stdio.h>

#define SIZE_OF_ASCII_TABLE 127

void print_histogram(int word_lengths[127], int last_used_index, int max)
{
    // Vertical size of histogram
    for (int i = max; i >= 0; --i)
    {
        // fix for all characters in ascii
        for (int j = 0; j < 128; ++j)
        {

            if (j == 9)
            {
                if (word_lengths[j] >= i && i != 0)
                {
                    putchar('|');
                }
                else if (i == 0)
                {
                    printf("t");
                }
                else
                {
                    putchar(' ');
                }
            }
            if (j == 10)
            {
                if (word_lengths[j] >= i && i != 0)
                {
                    putchar('|');
                }
                else if (i == 0)
                {
                    printf("n");
                }
                else
                {
                    putchar(' ');
                }
            }
            if (j == 32)
            {
                if (word_lengths[j] >= i && i != 0)
                {
                    putchar('|');
                }
                else if (i == 0)
                {
                    printf("s");
                }
                else
                {
                    putchar(' ');
                }
            }
            if (j >= 33)
            {
                if (word_lengths[j] >= i && i != 0)
                {
                    putchar('|');
                }
                else if (i == 0)
                {
                    printf("%c", j);
                }
                else
                {
                    putchar(' ');
                }
            }
        }
        putchar('\n');
    }
}

int main()
{

    int c, max;

    max = 0;

    int digits[SIZE_OF_ASCII_TABLE];

    // Table initialization
    for (int i = 0; i < 128; ++i)
    {
        digits[i] = 0;
    }

    // Counting char occurance
    while ((c = getchar()) != EOF)
    {
        if (c > -1 && c < 128)
        {
            ++digits[c];
        }
    }
    for (int i = 0; i < 128; ++i)
    {
        // printf("%c: %c\n", i, digits[i]);
        if (digits[i] > max)
        {
            max = digits[i];
        }
    }
    print_histogram(digits, SIZE_OF_ASCII_TABLE, max);
    printf("first free letters in histogram stands for t - tabulator, n - new line, s - whitespace\n");
    printf("max number of occurance of single character: %d\n", max);
}