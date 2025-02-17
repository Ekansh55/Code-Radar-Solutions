#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if(x <= 1) {
        printf("Not Prime\n");
    } else {
        int i;
        for(i = 2; i * i <= x; i++) {
            if(x % i == 0) {
                break;
            }
        }
        if(i * i > x) {
            printf("Prime\n");
        } else {
            printf("Not Prime\n");
        }
    }

    return 0;
}
