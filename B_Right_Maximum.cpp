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
    vector<int>v(n);
    for(auto &x:v) cin>>x;

    map<int,vector<int>>mp;

    for (int i = 0; i < n; i++)
    {
        mp[v[i]].push_back(i);
    }

    for(auto &x : mp){
        reverse(x.second.begin(), x.second.end());
    }

    int ans = 0, idx = INT_MAX;

    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        for (int i = 0; i < it->second.size(); i++)
        {
            int pos = it->second[i];

            if(pos < idx) ans++;

            idx = min(idx,pos);
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