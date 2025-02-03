#include <stdio.h>



int main() {
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        printf("Lowercase\n");
    }
    else{
        printf("Uppercase\n");
    }
    return 0;
}