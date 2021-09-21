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
       ll n, p; cin >> n >> p;
       vll a(n);        //denominations
       vll ans(n, 0);        //final answer
       ll i;
       for(i = 0; i < n; i++)
       cin >> a[i];
       i = n-1;
       ll flag = 0;
       while(i >= 0)
       {
           if(p % a[i] == 0)
           {
               // if total price is divisible by a denomination D(i)
               // we pay p-D(i) with that denomination
               // and the new price to pay becomes D(i) and we iterate further
               ans[i] = p / a[i] - 1;
               p = a[i];
               i--;
               continue;
           }
           else
           {
               // if total price p is not divisible by a denomination D(i)
               // one soultion is to keep coins of only that denomination
               ans[i] = p / a[i] + 1;       
               flag = 1;
               break;
           }
       }
       if(flag == 0)        // Output section
       cout << "NO\n";
       else
       {
           cout << "YES ";
           for(i = 0; i < n; i++)
           cout << ans[i] << " ";
           cout << "\n";
       }
    }
    return 0;
}  
