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

void f()
{
    int n;cin>>n;
    vector<ll>v;input(v,n);
    sort(v.begin(),v.end());
    ll x = v[0] * v[n-1];
    vector<ll> divisors;
    for(ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0)
        {
            divisors.push_back(i);
            if(i != x / i) divisors.push_back(x / i);
        }
    }

    sort(divisors.begin(), divisors.end());

    if(divisors == v) cout << x << endl;
    else cout << -1 << endl;

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