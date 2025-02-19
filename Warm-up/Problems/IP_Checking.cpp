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
        string s,b,part; cin>>s>>b;
        vector<int>v,vb;

        // to split using string stream
        stringstream ss(s);

        while (getline(ss,part,'.'))
        {
            v.push_back(stoll(part));  // string to long long 
        }

        stringstream sb(b);
        while (getline(sb,part,'.'))
        {
            vb.push_back(bitset<8>(part).to_ulong()); // binary bitset to unsigned long
        }

        
        if(v == vb) cout<<"Case "<<i<<": Yes"<<endl;
        else cout<<"Case "<<i<<": No"<<endl;

    }
}