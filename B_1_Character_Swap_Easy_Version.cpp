#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "No"  << std::endl; return;}
#define returnYES {std::cout << "Yes" << std::endl; return;}
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
    string s,t;cin>>s>>t;
    vector<int>idx;
    for (int i = 0; i < n; i++)
    {
        if(s[i] != t[i]) idx.push_back(i);
    }
    if(idx.size() < 2) returnNO;
    swap(s[idx[0]],t[idx[1]]);
    if(s == t) returnYES;
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