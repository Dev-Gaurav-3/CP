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
    int n;
    cin>>n;
    
    string s = "";
    while(n>0 && n%2 == 0) n /= 2;
    while(n>0){ 
        s += to_string(n%2);
        n /= 2;
    }
    if(s.size()&1)if(s[s.size()/2]=='1')returnNO;
    int l = 0,r = s.size()-1;
    while(l<r){
        if(s[l] != s[r]) returnNO;
        l++;
        r--;
    }
    returnYES;

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