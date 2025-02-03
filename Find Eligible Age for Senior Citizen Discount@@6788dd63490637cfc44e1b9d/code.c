#include <stdio.h>



int main() {
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>60){
        printf("Eligible\n");
    }
    else{
        printf("Not Eligible\n");
    }
    return 0;
}