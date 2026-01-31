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

void f()
{
    int n;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> v1 = v;
    sort(v1.begin(), v1.end());

    ll ans = LLONG_MAX;
    int val = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] != v1[i]) {
            val++;
            ans = min(ans, max(v1[n - 1] - v[i], v[i] - v1[0]));
        }
    }


    if (val == 0) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
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