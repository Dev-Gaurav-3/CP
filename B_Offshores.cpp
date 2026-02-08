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
    int n,x,y;cin>>n>>x>>y;
    vector<int>v;input(v,n);
    int max_idx = 0;
    int max_rem = 0;
    for (int i = 0; i < n; i++)
    {
        if((v[i]%x) > max_rem){max_idx = i;max_rem = (v[i]%x);}
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(i == max_idx){
            sum += v[i];
        }
        else{
            int k = v[i]/x;
            sum += (y*k);
        }
    }

    cout<< sum <<endl;
    
    
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