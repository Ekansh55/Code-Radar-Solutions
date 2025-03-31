#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k)
    for(int i=0;i<n;i++){
        brr[i] = arr[n-i-1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }

    
    return 0;
}