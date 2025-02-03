#include <stdio.h>



int main() {
    int x;
    int y;
    int z;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x==y==z){
        printf("Equilateral\n");
    }
    else if(x==y!=z || x!=y==z || x!=z==y){
        printf("Isosceles\n");
    }
    else{
        printf("Scalene\n");
    }
    return 0;
}