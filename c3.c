// Celcius to Fahreinette convertor

#include <stdio.h>

int main() {

    float celcius;

    printf("Enter Celcius : ");
    scanf("%f", &celcius);

    float F = (celcius * 9/5) + 32;

    printf("\nFahreintte : %f", F);
    return 0;
}