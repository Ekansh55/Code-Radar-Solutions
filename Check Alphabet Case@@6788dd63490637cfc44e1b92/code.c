#include <stdio.h>



int main() {
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z'){
        printf("Lowercase\n");
    }

    else if(x>= 'A' && x<= 'Z'){
        printf("Uppercase\n");
    }
    
    else {
        printf("Not an alphabet\n");
    }
    return 0;
}