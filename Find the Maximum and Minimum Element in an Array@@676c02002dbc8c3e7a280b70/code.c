#include <stdio.h>
int main() {
    int a, max, min;
    scanf("%d", &a);
    int arr[a];
    int odd = 0;
    int even = 0;

    for(int i = 0; i < a; i++){
        int ele;
        scanf("%d", &ele);
        arr[i] = ele;
    }
    max = arr[0];
    min = arr[0];
    
    for(int i = 0; i < a; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];

        }
    }
    printf("%d %d", min, max );
   
    return 0;
}