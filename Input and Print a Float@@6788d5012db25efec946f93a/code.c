#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    printf("%.2f", n);
}

int main() {
    printf("%f", welcome());
    return 0;
}