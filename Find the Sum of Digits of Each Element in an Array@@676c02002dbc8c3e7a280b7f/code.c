#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    int sum = 0;

    for(int i = 0; i < a; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < a; i++){
        while(arr[i] != 0){
            int n = arr[i] % 10;
            sum += n;
            int n = n/ 10;


        }
    }
    printf("%d", sum);
   
    return 0;
}