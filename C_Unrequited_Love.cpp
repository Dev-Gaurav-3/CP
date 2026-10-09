#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO                        \
    {                                   \
        std::cout << "NO" << std::endl; \
        return;                         \
    }
#define returnYES                        \
    {                                    \
        std::cout << "YES" << std::endl; \
        return;                          \
    }
#define return1                        \
    {                                  \
        std::cout << "1" << std::endl; \
        return;                        \
    }
#define return0                        \
    {                                  \
        std::cout << "0" << std::endl; \
        return;                        \
    }
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
    int n;cin>>n;vector<int>v,temp(n);input(v,n);
    ll ans = 0;
    unordered_map<int,int>mp;
    for (int i = 0; i < n-4; i++)
    {
        temp[i] = v[i] + v[i+2] - v[i+4];
        ans += mp[temp[i]];
        if((i >=2 && temp[i] == temp[i-2])) ans--;
        if((i >=4 && temp[i] == temp[i-4])) ans--;
        mp[temp[i]]++;
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