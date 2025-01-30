#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    int odd = 0;
    int even = 0;

    for(int i = 1; i <= a; i++){
        int ele;
        scanf("%d", &ele);
        arr[i] = ele;
    
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