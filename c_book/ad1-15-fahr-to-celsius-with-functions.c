#include <stdio.h>

void printHeader()
{
    printf("fahr celsius\n");
}

void printValues(float fahr, float celsius)
{
    printf("%3.0f %6.1f\n", fahr, celsius);
}

void fahrToCelsius(float fahr, float celsius, int upper, int step)
{
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printValues(fahr,celsius);
        fahr += step;
    }
}

int main()
{

    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printHeader();

    fahrToCelsius(fahr, celsius, upper, step);
}
