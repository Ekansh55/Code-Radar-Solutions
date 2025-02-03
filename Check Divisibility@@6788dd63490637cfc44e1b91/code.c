#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    if(x%5==0 && x%11==0) {
        printf("Divisible\n");
    }
    else{
        printf("Not Divisible\n");
    }
    return 0;
}