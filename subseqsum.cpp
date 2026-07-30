#include <bits/stdc++.h>
using namespace std;

void subsum(int i, vector<int> &a, vector<int> &v, int sum, int s)
{
    if (i >= a.size())
    {
        if (s == sum)
        {
            cout << "{";

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];

                if (i != v.size() - 1)
                    cout << ",";
            }

            cout << "}" << endl;
            return;
        }
        return;
    }

    v.push_back(a[i]);
    s += a[i];
    subsum(i + 1, a, v, sum, s);

    v.pop_back();
    s -= a[i];
    subsum(i + 1, a, v, sum, s);

    return; 
}
void subsum1(int i, vector<int> &a, vector<int> &v, int sum, int s)
{
    if (i >= a.size())
    {
        if (s == sum)
        {
            cout << "{";

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];

                if (i != v.size() - 1)
                    cout << ",";
            }

            cout << "}" << endl;
        }
        return;
    }

    //without taking the element 
    subsum1(i + 1, a, v, sum, s);
  
    v.push_back(a[i]);
    s += a[i];
    //after taking the element 
    subsum1(i + 1, a, v, sum, s);
    
    v.pop_back();
   

    return;
}

bool onesubsum(int i, vector<int> &a, vector<int> v, int sum, int s)
{
    if (i >= a.size())
    {
        if (s == sum)
        {
            cout << "{";

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i];

                if (i != v.size() - 1)
                    cout << ",";
            }

            cout << "}" << endl;
            return true;
        }
        return false;
    }

    v.push_back(a[i]);
    s += a[i];
    if ( onesubsum(i + 1, a, v, sum, s)== true ) return true;

    v.pop_back();
    s -= a[i];
    if (onesubsum(i + 1, a, v, sum, s)==true) return true;

    return false ;
}



int main()
{
    int n, inp;
    cin >> n;
    vector<int> a, v;
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        a.push_back(inp);
    }

    int sum;
    cin >> sum;
    int s = 0;
    
     onesubsum(0, a, v, sum, s);
    subsum(0, a, v, sum, s);
    subsum1(0, a, v, sum, s);

    return 0;
}