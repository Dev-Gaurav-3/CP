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
    int n,m;cin>>n>>m;
    string s1,s2;cin>>s1>>s2;
    unordered_map<char,int>mp;
    for(auto &x:s1){
        mp[x]++;
    }
    for(auto &x:s2){
        if(mp[x]>0){
            mp[x]--;
        }
        else returnNO;
    }
     if (mp['s'] == 1 && mp['i'] == 1 && mp['x'] == 1)
    {
        int sum = 0;
        for (auto &[a,b] : mp)
        {
            sum += b;
        }
        if (sum == 3)
            returnYES;
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