#include <stdio.h>



int main() {
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x+y>z && y+z>x && z+x>y){
        printf("Valid\n");
    }
    else {
        printf("Invalid\n");
    }
    return 0;
}