#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    if(a / 5 && a / 3){
        printf("Divisible by Both");
    }
    if(a / 5){
        printf("Divisible by 5");
    }
    if(a / 3){
        printf("Divisble by 3");
    }
    else{
        printf("Not Divisible");
    }
    
    return 0;
}