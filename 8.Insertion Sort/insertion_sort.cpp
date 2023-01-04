#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int x=arr[i];
        while(j>=0&&arr[j]>x){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
int main(){
    int arr[5]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
