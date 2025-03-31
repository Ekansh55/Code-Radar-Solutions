#include<stdio.h>
void reverse(int a, int b, int arr);
while(i<=j){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    i++;
    j--;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    if(k>=1);

    reverse(0,k-1,arr);
    reverse(k,n-k-1,arr);
    reverse(0,n-1,arr);


    printf("%d ",)
  

    
    return 0;
}