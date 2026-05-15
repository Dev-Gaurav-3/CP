#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "No"  << std::endl; return;}
#define returnYES {std::cout << "Yes" << std::endl; return;}
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
    int n;cin >> n;
    vector<int>v;input(v,n);
    vector<int> odd, even;
    for (int x : v) {
        if (x&1) odd.push_back(x);
        else even.push_back(x);
    }
    if (is_sorted(odd.begin(), odd.end()) && is_sorted(even.begin(), even.end())) returnYES
    else returnNO;
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