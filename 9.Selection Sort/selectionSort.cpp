#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    int i,j,k;
    for( i=0;i<n-1;i++){
        for(int j=k=i;j<n;j++)
        {
            if(arr[j]<arr[k]){
                k=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
    }
}
int main(){
int arr[5]={3,4,5,1,3};
int n=sizeof(arr)/sizeof(arr[0]);
selectionSort(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
