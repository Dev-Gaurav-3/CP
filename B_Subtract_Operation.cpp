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
    for (auto &x : v) cout << x << " ";
    cout << "\n";
}

template <typename T>
void input(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v) cin >> x;
}

void f()
{
    int n,k;cin>>n>>k;
    vector<int>v;input(v,n);

    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        int tar = v[i] - abs(k);
        auto it = lower_bound(v.begin(), v.end(), tar);

        if(it != v.end() && *it == tar){
            if(it - v.begin() != i) returnYES;
        }
    }
    returnNO;
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