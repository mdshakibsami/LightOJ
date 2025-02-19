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
        int n,q,w;  cin>>n>>q>>w;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        int ans = 0;
        int sum = 0;
        int j = 0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            j++;
            if(sum<=w) ans++;
            if(j==q) break;
        }
        cout<<"Case "<<i<<": "<<ans<<endl;
    }
}