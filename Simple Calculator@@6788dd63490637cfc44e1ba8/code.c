#include <stdio.h>
int main() {
    int a, b, sum;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c == '+'){
        sum = a + b;
    }
    else if(c == '-'){
        sum = a - b;
    }
    else if(c == '*'){
        sum = a * b;
    }
    else if(c == '/'){
        sum = a / b;
    }
    printf("%d", sum);

    return 0;


   
    return 0;
}