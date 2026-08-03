#include <bits/stdc++.h>
using namespace std;

void f(int i, vector<int> &a, int t, multiset<int> &b, set<multiset<int>> &ans)
{
    if (t < 0)
    {
        return;
    }
    if (t == 0)
    {
        ans.insert(b);
        return;
    }
    if (i == a.size())
    {
        return;
    }

    b.insert(a[i]);
    f(i + 1, a, t - a[i], b, ans);

    b.erase(a[i]);
    f(i + 1, a, t, b, ans);
}
int main()
{
    int n, inp;
    cin >> n;
    vector<int> a;
    multiset<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        a.push_back(inp);
    }
    int target;
    cin >> target;

    set<multiset<int>> ans;

    f(0, a, target, v, ans);
    for (auto x : ans)
    {
        cout << "[" ;
        for (auto y : x)
        {
            cout << y << " ";
        }
            cout << "]" << endl;
    }
}