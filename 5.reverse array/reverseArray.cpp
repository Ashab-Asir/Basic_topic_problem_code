#include<bits/stdc++.h>
using namespace std;
void printingArr(int arr[],int n){
for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
}
void reverseArr(int arr[],int n){
    int start=0,last=n-1;
while(start<last){
    swap(arr[start],arr[last]);
    start++;
    last--;
}
printingArr(arr,n);
}
int main()
{
    int odd_arr[5]={1,2,3,4,5};
    int ever_arr[6]={1,2,3,4,5,6};
    reverseArr(odd_arr,5);
    cout<<endl;
    reverseArr(ever_arr,6);
}
