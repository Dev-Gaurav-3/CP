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

int get(int n)
{
    if(n% 4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n + 1;
    return 0;
}

void f()
{
    int a,b;cin>>a>>b;
    int xo = get(a-1);

    if(xo == b) cout << a << endl;
    else {
        int x = xo ^ b;
        if(x == a) cout << a + 2 << endl;
        else cout << a + 1 << endl;
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