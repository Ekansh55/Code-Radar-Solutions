#include <stdio.h>



int main() {
    int x;
    int y;
    char z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%c",&z);
    if(y=='+'){
        printf("%d",(x+y));
    }
    return 0;
}