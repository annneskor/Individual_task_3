#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    setlocale(LC_ALL, "RUS");

    double a, b, c;

    printf("Введите катет a: ");
    scanf("%lf", &a);

    printf("Введите катет b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("Гипотенуза: %.2f\n", c);

    return 0;

}
