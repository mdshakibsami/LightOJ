#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    int i = 0;
    while(tc--)
    {
        i++;
        int m,l;    cin>>m>>l;
        int ans = (abs(m-l)*4+19)+(m*4);
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}