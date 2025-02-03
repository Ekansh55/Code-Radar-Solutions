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
    
    else if(x!=y!=z){
        printf("Scalene\n");
    }
    else{
        printf("Isosceles\n");
    }
    return 0;
}