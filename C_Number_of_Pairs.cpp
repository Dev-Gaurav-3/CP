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
    int n,l,r;cin>>n>>l>>r;
    vector<int>v;input(v,n);

    sort(v.begin(),v.end());
    ll total = 0LL;
    for (int i = 0; i < n; i++)
    {
        if(v[i]>r) break;
        int low = l - v[i];
        int high = r - v[i];
        auto lb = lower_bound(v.begin()+i+1,v.end(),low) - v.begin();
        auto ub = upper_bound(v.begin()+i+1,v.end(),high) - v.begin();
        
        int freq = ub-lb;
        total += freq;
    }
    cout << total << endl;
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