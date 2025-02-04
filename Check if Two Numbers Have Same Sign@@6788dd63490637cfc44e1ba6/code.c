#include <stdio.h>


int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>=0 && y>=0){
        printf("Same Sign\n");
    }
    else if(x<0 && y<0){
        printf("Same Sign\n");
    }
    else{
        printf("Different Sign\n");
    }
    return 0;
}