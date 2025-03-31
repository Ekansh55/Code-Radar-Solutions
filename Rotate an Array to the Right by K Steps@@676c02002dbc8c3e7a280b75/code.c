#include<stdio.h>
void reverse(int i, int j, int arr){
    while(i<=j){
         int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
         j--;
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k>=1) k=k%n;

    reverse(0,n-k-1,arr);
    reverse(n-k,n-1,arr);
    reverse(0,n-1,arr);

    for(int i=0;i<n;i++){
    printf("%d "arr[i]);
    }

    
    return 0;
}