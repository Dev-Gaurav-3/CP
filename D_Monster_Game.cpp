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
    cin>>n;
    vector<ll>a,b;
    input(a,n); 
    input(b,n); 

    
    vector<ll> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + b[i - 1];
    }
    
    ll maxi = 0,swords = 0;
    int j = 0;
    
    sort(a.rbegin(), a.rend());
    while (j < n) {
        ll x = a[j];
        while (j < n && a[j] == x) {
            swords++;
            j++;
        }
        int k = upper_bound(pref.begin(), pref.end(), swords) - pref.begin() - 1;
        maxi = max(maxi, x * 1LL * k);
    }
    cout << maxi << "\n";
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