#include <stdio.h>
int main() {
    
    int arr[a];
    int a;
    int odd = 0;
    int even = 0;
    scanf("%d", &a);

    for(int i = 1; i <= a; i++){
        scanf("%d", arr[i]);
    }
    for(int i = 1; i <= a; i++){
        if(arr[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d ", even);
    printf("%d", odd);
    
    return 0;
}