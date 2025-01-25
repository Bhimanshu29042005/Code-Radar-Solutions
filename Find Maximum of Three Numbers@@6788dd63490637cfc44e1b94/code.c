#include <stdio.h>
int main() {
   int a, b, c, max;

   max = a;
   if(a > b){
    max = a;
   }
   else if(b > a){
    max = b;
   }
   else if(c > a){
    max = c;
   }
   printf("%d", max)
    return 0;
}