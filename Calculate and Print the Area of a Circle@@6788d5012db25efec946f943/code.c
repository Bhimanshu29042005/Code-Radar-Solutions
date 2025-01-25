#include <stdio.h>
int main() {
    int r;
    float area;
    const float pi = 3.14;

    scanf("%d", &r);
    area = pi * r * r;
    printf("Area: %.2f", area);


    return 0;
}