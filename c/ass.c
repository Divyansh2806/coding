#include<stdio.h>
int main(){
    int arr[] ={1,2,3,4,5};
    // scanf("%d",&arr[5]);
    int n = sizeof(arr)/sizeof(arr[0]);
    int l=n;
    for (int i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i]= arr[l-1];
        arr[l-1]= temp;
        l--;
    }
    for(int j=0; j<n; j++){
        printf("%d\t",arr[j]);
    }
    return 0;
}