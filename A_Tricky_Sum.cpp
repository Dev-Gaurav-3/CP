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
vector<ll>v;

void f()
{
    ll n;cin>>n;
    ll ans = (n*(n+1))/2;
    for (ll  &i : v)
    {
        if(i>n) break;
        ans -= 2*i;
    }

    cout<< ans <<endl;
}

int main()
{
    fastio();
    int t = 1;
    for (int i = 0; i < 31; i++)
    {
        v.push_back(1LL<<i);
    }
    cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}