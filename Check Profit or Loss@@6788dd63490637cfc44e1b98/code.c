#include <stdio.h>


int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x-y<0) {
        printf("Profit\n");
    }
    else if(x-y==0) {
        printf("No Profit No Loss\n");
    }
    else{
        printf("Loss\n");
    }
    return 0;
}