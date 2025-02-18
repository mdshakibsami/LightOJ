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
        string a;
        int b;    cin>>a>>b;

        if(b<0) b = abs(b);

        int j=0;
        if(a[0]=='-') j=1;
        int rem = 0;
        for(;j<a.size();j++)
        {
            rem = rem*10 + (a[j]-'0');
            rem%=b;
        }
        
        if(rem!=0) cout<<"Case "<<i<<": "<<"not divisible"<<endl;
        else cout<<"Case "<<i<<": "<<"divisible"<<endl;
    }
}