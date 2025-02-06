#include <stdio.h>

int main() {
    int a, n;
    scanf("%d", &a);
    int arr[a];
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
    }
    printf("%d", sum);
   
    return 0;
}