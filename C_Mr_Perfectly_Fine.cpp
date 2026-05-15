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
    int n;cin>>n;
    vector<pair<int,string>>v;
    int ans = INT_MAX;
    while(n--){
        int m;cin>>m;
        string s;cin>>s;
        v.push_back({m,s});
        if(s == "11") ans = min(ans,m);
    }
    int a = INT_MAX,b = INT_MAX;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].second == "11") continue;
        if(v[i].second == "10") a = min(a,v[i].first);
        if(v[i].second == "01") b = min(b,v[i].first);
    }
    if(a == INT_MAX || b == INT_MAX){
        if(ans == INT_MAX){
            cout << -1 << endl;
            return;
        }
        cout << ans << endl;
        return;
    }
    else{
        cout << min(ans,a+b) << endl;
    }
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