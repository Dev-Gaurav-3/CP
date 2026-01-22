#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "0"  << std::endl; return;}
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
    int n;
    cin >> n;

    vector<int> a, b;
    input(a, n);
    input(b, n);

    sort(a.begin(),a.end());
    sort(b.rbegin(), b.rend());

    ll ans = 1;

    for (int i = 0; i < n; i++)
    {
        int cnt = n - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        ll ways = cnt - i;

        if (ways <= 0)
        {
            returnNO;
        }

        ans = (ans * ways) % MOD;
    }

    cout << ans << endl;
    


}


int main()
{
    fastio();
    int t = 1;
    cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}