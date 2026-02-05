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
    int n;cin>>n;
    vector<pair<int,int>>v;
    while(n--){
        int a,x;cin>>a>>x;
        v.push_back({a,x});
    } 
    int strt = INT_MIN,end = INT_MAX,n_i = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].first == 1) strt = max(strt,v[i].second);
        else if (v[i].first == 2) end = min(end,v[i].second);
    }
    ll ans = end-strt+1;
    if(ans < 0){cout<< 0 <<endl;return ;}
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i].first == 3 && v[i].second >= strt && v[i].second<=end) ans--;
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