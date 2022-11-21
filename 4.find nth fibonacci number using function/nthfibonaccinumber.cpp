#include<bits/stdc++.h>
using namespace std;
int nthFibonaccinNumber(int n){
  int first=0,second=1,sum=0;
  for(int i=2;i<n;i++){
    sum=first+second;
    first=second;
    second=sum;
  }
  return sum;
}
int main(){
 int n;
 cin>>n;
 int x= nthFibonaccinNumber(n);
 cout<<x;
}
