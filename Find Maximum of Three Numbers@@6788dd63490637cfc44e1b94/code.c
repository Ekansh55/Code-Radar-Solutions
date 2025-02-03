#include <stdio.h>



int main() {
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y && x>z) {
        printf("%d",x);
    }
    else if(y>z && y>x) {
        printf("%d",y);
    }
    else{
        printf("%d",z);
    }
    return 0;
}