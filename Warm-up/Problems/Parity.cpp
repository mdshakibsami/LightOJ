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
        int ans = 0;
        int n;
        cin >> n;
        while (n > 0)
        {
            if (n & 1)
                ans++;
            n /= 2;
        }

        if (ans & 1)
            cout << "Case " << i << ": " << "odd" << endl;
        else
            cout << "Case " << i << ": " << "even" << endl;
    }
}