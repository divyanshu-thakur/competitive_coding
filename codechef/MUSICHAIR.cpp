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
       ll i,tot=1;
       for(i=2;i<=sqrt(n);i++)
       {
           if(n%i==1)
           {
               if(n/i!=i)
                tot+=2;
                else
                tot++;
           }
       }
       if(n>2)
       tot++;
       cout<<tot<<"\n";
    }
    return 0;
}  
