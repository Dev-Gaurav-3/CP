#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "-1"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
template <typename T>
void print(const vector<T> &v)
{
    for (auto &x : v)
        cout << x << " ";
    cout << "\n";
}

template <typename T>
void input(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v)
        cin >> x;
}

void f()
{
    int n,k;cin>>n>>k;
    vector<int>v;
    input(v,n);
    sort(v.begin(),v.end());
    if (k == 0) {
        if (v[0] > 1) cout << v[0] - 1 << endl;
        else cout << -1 << endl;
        return;
    }

    if (k == n) {
        cout << v[n - 1] << endl;
        return;
    }

    if (v[k - 1] == v[k]) cout << -1 << endl;
    else cout << v[k - 1] << endl;
}

int main()
{
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}