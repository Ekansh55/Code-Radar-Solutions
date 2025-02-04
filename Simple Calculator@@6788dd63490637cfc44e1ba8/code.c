#include <stdio.h>



int main() {
    int x;
    int y;
    char z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%c",&z);
    if(z=='+'){
        printf("%d",(x+y));
    }
    return 0;
}