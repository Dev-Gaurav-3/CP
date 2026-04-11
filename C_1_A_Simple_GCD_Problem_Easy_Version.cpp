#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
#define return1 {std::cout << "1" << std::endl; return;}
#define return0 {std::cout << "0" << std::endl; return;}
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
ll lcm(ll a, ll b) {
    if (a == 0 || b == 0) return 0;
    return (a / __gcd(a, b)) * b;
}

void f()
{
    int n;cin >> n;
    vector<ll> a,b,g(n-1);input(a,n);input(b,n);
    
    for (int i = 0; i < n - 1; i++) {
        g[i] = __gcd(a[i], a[i + 1]); // as gcd of long subarrays is equal to gcd of adjacent 
    }

    int ans = 0;
    ll x;
    for (int i = 0; i < n; ++i) {
        if (i == 0) x = g[0];
        else if (i == n - 1) x = g[n - 2]; 
        else x = lcm(g[i - 1], g[i]);

        if (x < a[i]) ans++;
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