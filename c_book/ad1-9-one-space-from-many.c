#include <stdio.h>

int main() {
    int c;
    int previous=0;
    while( (c=getchar()) != EOF ) {
        if (c == ' ' && previous == ' ') {
            continue;
        }
        putchar(c);
        previous = c;
    }
}