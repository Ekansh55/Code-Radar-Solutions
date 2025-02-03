#include <stdio.h>


int main() {
    char x;
    scanf("%c",&x);
    if(x=='a' ||x=='e' ||x=='i'||x=='o'||x=='u' || x=='A' || x=='E' || x=='I'|| x=='O' || x=='U') {
        printf("Vowel\n");
    }
    else if(isdigit(x)){
        printf("Digit\n");
    }
    else if(!isalnum(x)) {
        printf("Special Character\n");
    }
    
    else {
        printf("Consonant\n");
    }
    return 0;
}