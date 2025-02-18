#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    // i got TLE for this solution
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    int k = 0;
    while (tc--)
    {
        k++;
        int n, m;
        cin >> n >> m;
        int ans = 0;
        int sum = (n * (n + 1)) / 2;
        for (int i = n; i <= m; i++)
        {
            if (sum % 3 == 0)
                ans++;
            sum += (i+1);
        }
        cout << "Case " << k << ": " << ans << endl;
    }
}