#include <stdio.h>
int main() {
   int a;
   int b = 1;
   scanf("%d", &a);

   for(int i = 0; i < a; i++){
    for(int j = 0; j <= i; j++){
        printf("%d ", b++);
    }
    printf("\n");
   }
    return 0;
}