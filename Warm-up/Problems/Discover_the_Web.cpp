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
        cout << "Case " << i << ": " << endl;
        stack<string> backwardStack, forwardStack;
        string current = "http://www.lightoj.com/";
        string cmd, link;
        while (cin >> cmd && cmd != "QUIT")
        {
            if (cmd == "VISIT")
            {
                backwardStack.push(current);
                cin >> link;
                current = link;
                cout<<current<<endl;

                while (!forwardStack.empty())
                {
                    forwardStack.pop();
                }
            }
            else if (cmd == "BACK")
            {
                if (backwardStack.empty())
                cout << "Ignored" << endl;
                else
                {
                    forwardStack.push(current);
                    current = backwardStack.top();
                    cout << current << endl;
                    backwardStack.pop();
                }
            }
            else if (cmd == "FORWARD")
            {
                if (forwardStack.empty())
                cout << "Ignored" << endl;
                else
                {
                    backwardStack.push(current);
                    current = forwardStack.top();
                    cout << current << endl;
                    forwardStack.pop();
                }
            }
        }
    }
}
