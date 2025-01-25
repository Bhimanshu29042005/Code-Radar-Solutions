#include <stdio.h>
int main() {
   int a, b, c;

   int max = a;
   if(a > b){
    max = a;
   }
   if(b > max){
    max = b;
   }
   if(c > max){
    max = c;
   }
   printf("%d", max)
    return 0;
}