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
    int n,x = 0,y = 0;cin>>n;
    string a,b;cin>>a>>b;

    for (int i = 0; i < n; i += 2)
    {
        x += (a[i] == '0');
        y += (b[i] == '0');
    }
    for (int i = 1; i < n; i += 2)
    {
        x += (b[i] == '0');
        y += (a[i] == '0');
    }

    cout << ((x >= ((n+1)/2) && y >= n/2)? "YES" : "NO") << endl;
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