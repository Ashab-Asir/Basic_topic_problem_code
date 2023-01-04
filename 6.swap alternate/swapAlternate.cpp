#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int n){
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
}
void swapAlternate(int arr[],int n){
for(int i=0;i<n;i=i+2)
{
    if(i+1<=n-1){
        swap(arr[i],arr[i+1]);
    }

}
  printArr(arr,n);

}
int main(){
    int evenArr[6]={1,2,3,4,5,6};
    int oddArr[5]={1,2,3,4,5};
    swapAlternate(evenArr,6);
    swapAlternate(oddArr,5);
}
