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
    vector<int>a,b;input(a,n);input(b,n);
    int max_i = 0,maxi = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        int num = min(a[i],b[i]);
        if(num>maxi){
            maxi = num;
            max_i = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(i == max_i) sum += min(a[i],b[i]);
        else sum += max(a[i],b[i]);
    }

    cout << sum + max(a[max_i],b[max_i]) << endl;    
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