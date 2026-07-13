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
    int n;cin>>n;
    if(n == 2){
        cout << -1 << endl;
        return ;
    }
    vector<ll>ans;
    // 1+2+3 = 6 //
    if(n >= 1){
        ans.push_back(1);
    }
    if(n >= 2){
        ans.push_back(2);
    }
    if(n >= 3){
        ans.push_back(3);
    }
    ll x = 6;
    for (int i = 4; i <= n; i++)
    {
        ans.push_back(x);
        x *= 2;
    }
    print(ans);
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