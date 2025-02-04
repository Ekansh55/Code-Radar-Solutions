#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    if(x%4==0){
        printf("Leap Year");
    }
    else if(x%400==0 && x%100!=0){
        printf("Not a Leap Year");
    }
    else{
        printf("Leap Year");
    }
    return 0;
}