#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
    setlocale(LC_ALL, "RUS");

    double a, b, c;

    printf("������� ����� a: ");
    scanf("%lf", &a);

    printf("������� ����� b: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);

    printf("����������: %.2f\n", c);

    return 0;

}
