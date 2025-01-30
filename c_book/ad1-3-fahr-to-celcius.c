#include <stdio.h>

int main() {
    float fahr, celcuis;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("fahr, celcius\n");
    while(fahr <= upper) {
        celcuis = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celcuis);
        fahr = fahr + step;
    }
}