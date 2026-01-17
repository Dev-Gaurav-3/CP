#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "0"  << std::endl; return;}
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
    vector<int>v;
    input(v,n);

    ll ans = 0;
    vector<int>odd;

    for (auto &x: v)
    {
        if(x&1) odd.push_back(x);
        else ans += x;
    }
    if(odd.empty()) returnNO;
    sort(odd.begin(),odd.end());
    ans += odd.back();
    odd.pop_back();
    int mid = odd.size()/2;

    while(mid--){
        ans += odd.back();
        odd.pop_back();
    }
    cout<< ans <<endl;


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