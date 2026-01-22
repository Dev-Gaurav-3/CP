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
    cin >> n;

    set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }

    int ans = 0;
    int cur = 0;

    ll prev = LLONG_MIN;

    for (auto x : s) {
        if (x == prev + 1) {
            cur++;
        } else {
            cur = 1;
        }
        ans = max(ans, cur);
        prev = x;
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