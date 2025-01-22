#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    printf("%f", n);
}

int main() {
    printf("%f", welcome());
    return 0;
}