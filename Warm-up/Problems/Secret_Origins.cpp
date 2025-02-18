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
        int n;
        cin >> n;
        int temp = n;

        //_________________________________________
        // converting decimal to binary
        deque<char> dq,tdq;
        while (temp > 0)
        {
            int x = temp % 2;
            x += '0'; // converting digit to char
            dq.push_back(x);
            temp /= 2;
        }
        reverse(dq.begin(), dq.end());
        // for(auto x:dq) cerr<<x;
        // cerr<<endl;
        //_________________________________________

        int ans = 0;
        int j = 0;
        tdq = dq;  // making a copy of dq because next_permutation will change dq
        if (next_permutation(tdq.begin(), tdq.end()))
        {
            int decimal = stoi(string(tdq.begin(), tdq.end()), 0, 2);  // convert binary string to decimal
            cout << "Case " << i << ": " << decimal << endl;
        }
        else
        {
            bool flag = true;  // if no permutation is possible first digit must be 1 => for 8(1000)
            for (int i = 1; i <= dq.size(); i++) // checking if all digits are 0 after first digit
            {
                if (dq[i] == '1')
                {
                    flag = false;
                }
            }

            if (flag)
            {
                dq.push_back('0'); // because all are 0 for 8(1000) after first digit, so next permutation will be 16(10000)
            }
            else
            {
                dq.push_front('0'); // otherwise i have to make the scope for next permutation
                next_permutation(dq.begin(), dq.end());
            }
            int decimal = stoi(string(dq.begin(), dq.end()), 0, 2);
            cout << "Case " << i << ": " << decimal << endl;
        }
    }
}