#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int tc;cin>>tc;
    int i=0;
    while(tc--)
    {
        i++;
        int a,b,c;  cin>>a>>b>>c;
        vector<int> v;
        v.push_back(a);v.push_back(b);v.push_back(c);
        sort(v.begin(),v.end());
        if(v[0]*v[0]+v[1]*v[1]==v[2]*v[2]) cout<<"Case "<<i<<": "<<"yes"<<endl;
        else cout<<"Case "<<i<<": "<<"no"<<endl;
    }
}