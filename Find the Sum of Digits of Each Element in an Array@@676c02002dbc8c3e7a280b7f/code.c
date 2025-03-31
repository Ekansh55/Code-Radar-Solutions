#include<stdio.h>
int main(){
    int n;
    int b=0;
    int sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int a=arr[i];
        while(a>0){
            b=a%10;
            sum=sum+b;
            a=a/10;
        }
        arr[i]=sum;
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


    return 0;
}