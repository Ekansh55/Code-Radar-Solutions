#include <stdio.h>



int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x%y==0){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}