#include <stdio.h>
int main() {
    int a, b, sum;
    char c;
    scanf("%d %d ", &a, &b);
    scanf("%c", &c);
    if(c == '+'){
        sum = a + b;
    }
    if(c == '-'){
        sum = a - b;
    }
    if(c == '*'){
        sum = a * b;
    }
    if(c == '/'){
        sum = a / b;
    }
    printf("%d", sum);

    return 0;
}
