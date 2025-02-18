#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        if(n>10)
        {
            cout<<10<<" "<<n-10<<endl;
        }
        else cout<<0<<" "<<n<<endl;
    }
}