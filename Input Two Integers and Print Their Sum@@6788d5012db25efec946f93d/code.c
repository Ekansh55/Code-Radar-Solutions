#include <stdio.h>


void sum(int x, int y);
int main() {
    int x,y,add;
    scanf("%d %d",&x,&y);
    add = x + y;
    printf("Sum: %d\n",add);
    return 0;
}
void sum(int x, int y){
    int add = x + y;
    printf("%d",add);
}