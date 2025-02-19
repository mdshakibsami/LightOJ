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
        string s;   cin>>s;
        string t = s;
        reverse(t.begin(),t.end());
        if(t==s) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;
    }
}