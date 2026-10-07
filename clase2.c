#include <stdio.h>

// F⁰ = (C⁰ * 1.8) + 32
// C⁰ = (5 / 9) * F⁰ - 32 
int main(void){
    float farh, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    farh = lower;

    while (farh < upper){
        celsius = (5./9.) * (farh - 32.);
        printf("%.3f\t%.3f\n", farh, celsius);
        farh += step;
    }
    return 0;
}