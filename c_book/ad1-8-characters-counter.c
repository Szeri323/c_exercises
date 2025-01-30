#include <stdio.h>

int main() {
    int c, new_line, space, tabulation;
    new_line = space = tabulation = 0;
    while((c = getchar()) != EOF) {
        if(c == ' '){
            ++space;
        }
        else if(c == '\n') {
            ++new_line;
        }
        else if(c == '\t') {
            ++tabulation;
        }
    }
    printf("new lines: %d, spaces: %d, tabulations: %d\n", new_line, space, tabulation);
}