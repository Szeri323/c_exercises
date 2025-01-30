#include <stdio.h>

int main() {
    float celcuis;
    float lower, upper, step;
    int fahr;

    lower = -17.8;
    upper = 150;
    step = 11.1;

    celcuis = lower;
    printf("celcius, fahr\n");
    while(celcuis <= upper) {
        fahr = (1.8 * celcuis) + 32.0 + 1;
        printf("%6.1f %6d\n", celcuis, fahr);
        celcuis = celcuis + step;
    }
}