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
    vector<int>v(n);input(v,n);

    sort(v.begin(),v.end());

    int diff = v[n-1] - v[0], l = 0,h = n-1,ways = 0; 
    
    if(diff == 0){
        ll ways = 1LL * n * (n - 1) / 2;
        cout << diff << " " << ways << endl;
        return;
    }

    ll cntMin = 0, cntMax = 0;

    for(int i = 0; i < n; i++){
        if(v[i] == v[0]) cntMin++;
        if(v[i] == v[n-1]) cntMax++;
    }

    cout << diff << " " << cntMin * cntMax << endl;
    
}

int main()
{
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}