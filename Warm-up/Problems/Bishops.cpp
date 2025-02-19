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
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        
        int c = abs(x-a);
        int d = abs(y-b);

        if (c%2 == d%2)
        {
            if (c == d)
                cout << "Case " << i << ": " << 1 << endl;
            else
                cout << "Case " << i << ": " << 2 << endl;
        }
        else
            cout << "Case " << i << ": impossible" << endl;
    }
}