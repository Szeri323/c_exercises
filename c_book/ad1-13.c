#include <stdio.h>

#define IN 1  /* Inside the word */
#define OUT 0 /* Outsie the word */

void horizontal_histogram(int char_counter)
{
    for (int i = 1; i < char_counter; ++i)
    {
        putchar('-');
    }
    printf("(%d)", char_counter - 1);
}

void vertical_histogram(int word_lengths[10], int index, int max)
{
    for (int i = 0; i < max; ++i)
    {
        for (int j = 0; j < index; ++j)
        {
            // printf("wl: %d max: %d", word_lengths[j] - 1, max);
            if (word_lengths[j] - 1 > i)
            {
                putchar('|');
            }
        }
        putchar('\n');
    }
}

int main()
{
    int c, char_counter, index, max;
    int word_lengths[10];
    char_counter = index = max = 0;
    while ((c = getchar()) != EOF)
    {
        ++char_counter;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
            horizontal_histogram(char_counter);
            if (char_counter > max)
            {
                max = char_counter;
            }
            word_lengths[index] = char_counter;
            ++index;
            char_counter = 0;
        }
    }
    putchar('\n');
    vertical_histogram(word_lengths, index, max - 1);
    putchar('\n');
}