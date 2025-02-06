#include <stdio.h>

int main() {
    int a, n, m;
    scanf("%d", &a);
    int sum = 0;

    for(int i = 0; i < a; i++){
        scanf("%d", &m);
        
    }
    for(int i = 0; i < a; i++){
        while(m != 0){
            n = m % 10;
            sum += n;
            n = n/ 10;


        }
    }
    printf("%d", sum);
   
    return 0;
}