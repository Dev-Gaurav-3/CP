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
    vector<int>v;input(v,n);
    vector<int>none,two,three,six;
    for (int i = 0; i < n; i++)
    {
        if(v[i]%6 == 0) six.push_back(v[i]);
        else if(v[i]%2 == 0) two.push_back(v[i]);
        else if(v[i]%3 == 0) three.push_back(v[i]);
        else{
            none.push_back(v[i]);
        }
    }
    for (auto &&i : six)
    {
        cout << i << " ";
    }
    for (auto &&i : two)
    {
        cout << i << " ";
    }
    for (auto &&i : none)
    {
        cout << i << " ";
    }
    for (auto &&i : three)
    {
        cout << i << " ";
    }
    cout << endl;
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