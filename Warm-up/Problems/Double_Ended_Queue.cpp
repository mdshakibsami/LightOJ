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
        cout<<"Case "<<i<<": "<<endl;
        int n, q;
        cin >> n >> q;
        deque<int> dq;
        while (q--)
        {
            string s;
            cin >> s;
            if (s == "pushLeft" || s == "pushRight")
            {
                int x;
                cin >> x;
                if (dq.size() < n)
                {
                    if(s == "pushLeft")
                    {

                        dq.push_front(x);
                        cout << "Pushed in left: " << x << endl;
                    }
                    else
                    {
                        dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                    }
                }
                else
                {
                    cout << "The queue is full" << endl;
                }
            }
            else
            {
                if(dq.empty()) cout<<"The queue is empty"<<endl;
                else
                {
                    if(s == "popLeft")
                    {
                        int x = dq.front();
                        cout<<"Popped from left: "<<x<<endl;
                        dq.pop_front();
                    }
                    else
                    {
                        int x = dq.back();
                        cout<<"Popped from right: "<<x<<endl;
                        dq.pop_back();
                    }
                }
            }
            
            
        }
    }
}