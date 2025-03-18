#include <stdio.h>

int main() {
    int a, n, m;
    scanf("%d", &a);
    int arr[n];
    int sum = 0;

    for(int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
        
    }
    for(int i = 0; i < a; i++){
        while(arr[i] != 0){
            n = arr[i] % 10;
            sum += n;
            n = n/ 10;
            


        }
        i++;
    }
    printf("%d", sum);
   
    return 0;
}