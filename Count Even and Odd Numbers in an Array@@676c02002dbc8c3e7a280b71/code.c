#include<stdio.h>
int main(){
    int n,m=0,l=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(i%2==0){
            m++;
        }
    }
    for(int i=0;i<=n-1;i++){
        if(i%2!=0){
            l++;
        }
    }
    printf("%d %d",m,l);
    return 0;
}