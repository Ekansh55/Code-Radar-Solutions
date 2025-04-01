#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int ans[n];
    int idx=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(ans[idx]!=0){
            ans[idx]=arr[i];
            idx++;
        }
        while(idx=9){
            ans[idx]=0;
            idx++;
        }

    }
    for(int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }

    return 0;
}