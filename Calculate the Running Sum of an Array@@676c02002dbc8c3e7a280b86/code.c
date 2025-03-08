#include <stdio.h>
int main(){
    int a, sum = 0;
    scanf("%d", &a);
    int arr[a];

    for(int i = 0; i < a; i++ ){
        int ele;
        scanf("%d", &ele);
        arr[i] = ele;
        sum += arr[ele];
        printf("%d ", ele);
        
    }
    

}