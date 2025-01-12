/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, m;
    cin >> n >> m;
    string str;
    cin >> str;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (auto &it : arr)
        for (auto &itt : it)
            cin >> itt;
    vector<int> row(n, 0), col(m, 0);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            row[i] += arr[i][j], col[j] += arr[i][j];
    int i = 0, j = 0;
    for (auto &it : str)
    {
        if(it == 'D')
            arr[i][j] -= row[i];
        else
            arr[i][j] -= col[j]; 
        row[i] += arr[i][j];
        col[j] += arr[i][j];
        (it == 'D') ? i++ : j++;
    }
    arr[i][j] -= col[j]; 
    for (auto &it : arr)
    {
        for(auto &itt: it)
            cout << itt << ' '; 
        cout << endl; 
    }
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