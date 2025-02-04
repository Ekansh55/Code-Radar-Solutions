#include <stdio.h>



int main() {
    int x;
    int y;
    char z;
    scanf("%d %d %c",&x,&y,&z);
    if(y=='+'){
        printf("%d",(x+y));
    }
    return 0;
}