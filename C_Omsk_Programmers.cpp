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
    ll a,b,x;cin>>a>>b>>x;
    
    if(a == b) return0;
    
    vector<pair<ll,int>>v1,v2;
    ll curr = a,op = 0;
    while (true) {
        v1.push_back({curr, op});
        if (curr == 0 ) break;
        op++;curr /= x;
    }
    curr = b;
    op = 0;

    while (true) {
        v2.push_back({curr, op} );
        if (curr ==0) break;
        op++;curr /= x;
    }
    ll ans = INT_MAX;
    for (auto &[i, op1]: v1) {
        for (auto &[j, op2]: v2) {
            ans = min(ans,op1+op2 +abs(i - j));
        }
    }
    cout << ans << endl;
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