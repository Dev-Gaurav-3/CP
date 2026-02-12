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
    int n;
    cin >> n;

    vector<int> p(n), a(n);input(p, n);input(a, n);

    vector<int> pos(n + 1),b;
    for (int i = 0; i < n; i++) pos[p[i]] = i;
    b.push_back(a[0]);

    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1]) b.push_back(a[i]);
    }

    for (int i = 1; i < b.size(); i++)
    {
        if (pos[b[i]] <= pos[b[i - 1]]) returnNO;
    }
    returnYES;
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