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
    ll p,q;cin >> p >> q;
    ll total = p + 2*q;
    ll val = 2*total + 1;
    bool found = false;
    for(ll i = 3; i*i <= val; i += 2){
        if(val % i == 0){
            ll a = i, b = val / i;
            if(b - a <= 2*p){
                cout << (a-1)/2 << " " << (b-1)/2 << "\n";
                return ;
            }
        }
    }
    cout << -1 << "\n";
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