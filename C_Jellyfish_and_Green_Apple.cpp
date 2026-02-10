#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
#define return0 {std::cout << "0" << std::endl; return;}
#define return1 {std::cout << "1" << std::endl; return;}
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
    while(n>=m) n -= m; 
    if(n == 0){ return0;}
    else{
        ll ans = 0;
        unordered_set<ll>st;
        while(true){
            if(st.count(n)){cout<< -1 <<endl;return ;}
            st.insert(n);
            ans += n;
            n *= 2;
            while(n>=m) n -= m;
            if(n == 0) break;
        }
        cout<< ans <<endl;
        return;
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