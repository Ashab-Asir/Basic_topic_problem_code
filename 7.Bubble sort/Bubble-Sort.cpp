#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int flag=0;
    for(int j=0;j<n-1-i;j++)
    {
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            flag=1;
        }
    }
    if(flag==0){
        break;
    }
  }

}
int main(){
    int n=6;
    int arr[6]={6,7,3,4,1,9};
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
