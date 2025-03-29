#include<stdio.h>
int main(){
    int n,m,l;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(n%2==0){
            m++;
        }
    }
    for(int i=0;i<=n-1;i++){
        if(n%2==0){
            l++;
        }
    }
    printf("%d %d",m,l);
    return 0;
}