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
        double r;
        cin >> r;
        double rec = 4 * r * r;
        double cir = 2 * acos(0) * r * r;
        cout << "Case " << i << ": " << fixed << setprecision(2) << rec - cir << endl;
    }
}