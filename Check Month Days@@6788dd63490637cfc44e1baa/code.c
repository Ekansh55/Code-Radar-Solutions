#include <stdio.h>



int main() {
    int x;
    scanf("%d",&x);
    if(x==1){
        printf("31");
    }
    else if(x==2){
        printf("28");
    }
    else if(x==4){
        printf("30");
    }
    else if(x==12){
        printf("31");
    }
    else{
        printf("Invalid month");
    }
    return 0;
}