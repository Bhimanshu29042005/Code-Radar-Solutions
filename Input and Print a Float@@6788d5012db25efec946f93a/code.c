#include <stdio.h>

float* welcome(float n) {
    scanf("%f", &n);
    printf("%.2f", n);
 
}

int main() {
    printf("%f", welcome());
    return 0;
}