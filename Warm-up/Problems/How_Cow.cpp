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
        int x1,y1,x2,y2;   cin>>x1>>y1>>x2>>y2;
        int tc; cin>>tc;
        cout<<"Case "<<i<<":"<<endl;
        while (tc--)
        {
            int x,y;    cin>>x>>y;
            if(x>=x1 && x<=x2 && y>=y1 && y<=y2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        
    }
}