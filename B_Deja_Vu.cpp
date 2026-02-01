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
    int n,q;
    cin>>n>>q;
    vector<ll>a,x;
    input(a,n); 
    input(x,q);

    int prev = 31;
    for (auto &&i : x)
    {
        if(i>=prev) continue;
        if(i == 0){prev = i; continue;}
        ll power = 1LL<<i;
        for (int j = 0;j<n;j++)
        {
            if(i>0 && a[j] % power == 0){
                a[j] += (1LL<<(i-1)); 
            }
        }
        prev = i;
    }
    print(a);    
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