#include <stdio.h>



int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y){
        printf("First\n");
    }
    else if(x<y){
        printf("Second\n");
    }
    else{
        printf("Equal\n");
    }
    return 0;
}