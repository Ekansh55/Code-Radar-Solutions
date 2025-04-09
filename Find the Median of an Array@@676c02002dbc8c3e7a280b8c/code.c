#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int m;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    
    }
    m = sum/n;
    printf("%d",m);
    
    
    return 0;
}