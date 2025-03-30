#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    int x=0;
    int smin = arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]<smin&&arr[i]!=min){
            smin=arr[i];
            x=1;
        }
    }
    if(x==1){
        printf("%d",smin);
    }
    else{
        printf("-1");
    }

    
    return 0;
}
