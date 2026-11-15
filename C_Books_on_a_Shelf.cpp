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

// OBS - 
void f()
{
    int n;cin>>n;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        mp[x]++;
    }
    
    vector<int>v1,v2;
    int k = 0;
    for(auto &[a,b]:mp){
        v1.push_back(a);
        k++;
        if(b>1)k++;
        b--;
    }
    for(auto &[a,b]:mp){
        while(b>0){
            v2.push_back(a);
            b--;
        }
    }
    reverse(v2.begin(),v2.end());
    for (int i = 0; i < v2.size(); i++)
    {
        v1.push_back(v2[i]);
    }
    cout << k << endl;
    print(v1);
    
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