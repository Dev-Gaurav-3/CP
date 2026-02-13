#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
#define return0 {std::cout << "0" << std::endl; return;}
#define return1 {std::cout << "1" << std::endl; return;}
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
    vector<ll>a,b;input(a,n);input(b,n);
    ll ans = 0;
    ll mx = INT_MIN,mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        ans += abs(a[i] - b[i]);
        mx = max(mx,min(a[i],b[i]));
        mn = min(mn,max(a[i],b[i]));
    }
    cout<< ans + max(0LL,2*(mx-mn)) <<endl;
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