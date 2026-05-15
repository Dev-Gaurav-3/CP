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
    int n,k;cin>>n>>k;
    vector<int>v;input(v,n);
    sort(v.begin(),v.end());
    bool zero = false;
    for (int i = 0; i < n && k>0; i++)
    {
        if(v[i] >= 0){
            break;
        }
        v[i] = abs(v[i]);
        k--;
    }
    sort(v.begin(),v.end());
    int sum = accumulate(v.begin(),v.end(),0);
    if (k % 2 == 1)
    {
        sum -= 2LL * v[0];
    }
    cout << sum << endl;

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