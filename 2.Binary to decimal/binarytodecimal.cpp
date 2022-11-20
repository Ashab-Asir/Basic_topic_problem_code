#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0,digit,i=0;
    while(n!=0)
    {
        digit=n%10;
        ans=ans+digit*pow(2,i);
        n=n/10;
        i++;
    }
    cout<<ans;
}

