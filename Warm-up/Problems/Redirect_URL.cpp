#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    int i = 0;
    while (tc--)
    {
        i++;
        string s;
        cin >> s;
        cout << "Case " << i << ": ";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==':' && s[i-1] !='s') cout<<'s';
            cout<<s[i];
        }
        cout<<endl;
    }
}