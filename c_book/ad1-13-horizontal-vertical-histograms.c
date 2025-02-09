#include <stdio.h>

#define IN 1  /* Inside the word */
#define OUT 0 /* Outsie the word */

void vertical_histogram(int char_counter)
{
    for (int i = 1; i < char_counter; ++i)
    {
        putchar('-');
    }
    printf("(%d)", char_counter - 1);
}

void horizontal_histogram(int word_lengths[10], int last_used_index, int max_number_of_chars)
{
    /* Prints horizontal histogram (to invert the axis switch max_number_of_chars loop to ascending) */
    for (int i = max_number_of_chars; i >= 0; --i)
    {
        for (int j = 0; j < last_used_index; ++j)
        {
            // printf("wl: %d max_number_of_chars: %d", word_lengths[j] - 1, max_number_of_chars);
            if (word_lengths[j] - 1 > i)
            {
                putchar('|');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar('\n');
    }
}

int main()
{
    int c, char_counter, last_used_index, max_number_of_chars;
    int word_lengths[10];
    char_counter = last_used_index = max_number_of_chars = 0;
    while ((c = getchar()) != EOF)
    {
        ++char_counter;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            putchar('\n');
            vertical_histogram(char_counter);
            if (char_counter > max_number_of_chars)
            {
                max_number_of_chars = char_counter;
            }
            word_lengths[last_used_index] = char_counter;
            ++last_used_index;
            char_counter = 0;
        }
    }
    putchar('\n');
    horizontal_histogram(word_lengths, last_used_index, max_number_of_chars - 1);
    putchar('\n');
}