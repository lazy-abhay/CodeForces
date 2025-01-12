/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    int maxm = LLONG_MIN, cnt = 0;
    int diff = LLONG_MAX;
    for (int i = 0; i < n; ++i)
        if (a[i] >= b[i])
        {
            if (maxm == LLONG_MIN)
                maxm = a[i] - b[i];
            else
                maxm = min(maxm, a[i] - b[i]);
        }
        else
            cnt++, diff = min(diff, b[i] - a[i]);
    if (cnt == 0)
        cout << "YES";
    else if (cnt == 1)
    {
        if(maxm >= diff)
            cout << "YES"; 
        else
            cout << "NO"; 
    }
    else
        cout << "NO";
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}