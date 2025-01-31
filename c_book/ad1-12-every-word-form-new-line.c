#include <stdio.h>

#define IN 1 /* Inside the word */
#define OUT 0 /* Outside the word */

int main () {
    int c;

    while( (c=getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            putchar('\n');
        }
        else {
            putchar(c);
        }
    }
}