#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "0"  << std::endl; return;}
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
    
    vector<ll>v; // use long long a[i] can be 10^18;
    input(v,n);
    ll gcd = v[0],ans1 = 0,ans2 = 0;
    for (int i = 2; i < n; i+=2)
    {
        gcd = __gcd(gcd,v[i]);
    }
    ans1 = gcd;
    for (int i = 1; i < n; i+=2)
    {
        if(v[i]%gcd == 0){
            ans1 = 0;
        }
    }
    gcd = v[1];
    for (int i = 3; i < n; i+=2)
    {
        gcd = __gcd(gcd,v[i]);
    }
    ans2 = gcd;
    for (int i = 0; i < n; i+=2)
    {
        if(v[i]%gcd == 0){
            ans2 = 0;
            break;
        }
    }
    cout<< max(ans1,ans2) <<endl;
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