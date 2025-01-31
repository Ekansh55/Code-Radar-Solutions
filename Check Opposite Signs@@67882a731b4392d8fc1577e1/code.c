#include <stdio.h>


int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>=0 && y<=0) {
        printf("True");

    }
    else if(x<=0 && y>=0) {
        printf("True");

    else if(x==0 and y==0){
        printf("False");
    }
    }
    else{
        printf("False");
    }
    return 0;
}