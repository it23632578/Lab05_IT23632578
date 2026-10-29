
#include <stdio.h>

int main(void) {
    float wt_lb, ht_in, bmi;

    printf("Enter weight in pounds: ");
    scanf("%f", &wt_lb);

    printf("Enter height in inches: ");
    scanf("%f", &ht_in);

    if (wt_lb <= 0 || ht_in <= 0) {
        printf("Invalid weight or height\n");
        return 1;
    }

    bmi = (wt_lb / (ht_in * ht_in)) * 703;

    printf("BMI: %.1f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if (bmi < 25) {
        printf("Normal weight\n");
    } else if (bmi < 30) {
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }

    return 0;
}

