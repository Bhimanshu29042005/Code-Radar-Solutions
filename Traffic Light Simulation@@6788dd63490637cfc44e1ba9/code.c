#include <stdio.h>
int main() {
    char a;
    scanf("%c", &a);
    if(a == 'R'){
        printf("Stop");
    }
    if(a == "G"){
        printf("Go");
    }
    if(a == "Y"){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }

    
    return 0;
}