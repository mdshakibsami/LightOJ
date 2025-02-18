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
    int i=0;
    while (tc--)
    {
        i++;
        cout << "Case " << i << ":" << endl;
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int sum = 0,mul=1;
        int rev = 0;
        while (m--)
        {

            char ch;
            cin >> ch;
            if (ch == 'P')
            {
                int x, y;
                cin >> x >> y;
                swap(v[x], v[y]);
            }
            else if (ch == 'S')
            {
                int x;
                cin >> x;
                for(int i=0;i<n;i++) v[i]+=x;
            }
            else if (ch == 'R')
            {
                reverse(v.begin(), v.end());
            }
            else if (ch == 'M')
            {
                int x;
                cin >> x;
                for(int i=0;i<n;i++) v[i]*=x;
            }
            else if (ch == 'D')
            {
                int x;
                cin >> x;
                for(int i=0;i<n;i++) v[i]/=x;
            }
        }

     

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                cout << v[i] << endl;
            }
            else
                cout << v[i] << " ";
        }
    }
}