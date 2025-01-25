#include <stdio.h>
int main() {
    int r;
    double area;
    const float pi = 3.14;

    scanf("%d", &r);
    area = pi * r * r;
    printf("Area: %.2lf", area);


    return 0;
}