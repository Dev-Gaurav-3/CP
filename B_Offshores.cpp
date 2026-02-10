#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
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

void f() {
    int n;
    ll x, y;
    cin >> n >> x >> y;

    vector<ll> a(n), cnt(n);input(a,n);


    ll total = 0;
    for (int i = 0; i < n; i++) {
        cnt[i] = a[i] / x;
        total += cnt[i] * y;
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, a[i] + total - cnt[i] * y);
    }

    cout << ans <<endl;
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