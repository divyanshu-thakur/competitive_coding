#include<bits/stdc++.h>
#define vll vector<long long>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);      //fast I/O

    ll t;cin>>t;        //testcases iteration
    while(t--)
    {
       ll n;cin>>n;
       vll a(n);
       ll i;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
       }
       sort(a.begin(),a.end());
       cout<<a[n/2]-a[(n/2)-1]<<"\n";
    }
    return 0;
}  
