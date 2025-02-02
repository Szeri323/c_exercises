#include <stdio.h>

#define IN 1 /* Inside the word */
#define OUT 0 /* Outsie the word */

int main () {
    int c, new_char, new_word;
    new_char = new_word = 0;
    while( (c=getchar()) != EOF ) {
        ++new_char;
        if( c == ' ' || c == '\n' || c == '\t') {
            for (int i = 1; i < new_char; ++i) {
                putchar('-');
            }
            new_char = 0;
            putchar('\n');
        }
    }
}