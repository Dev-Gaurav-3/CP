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
    int n;cin >> n;
    string s1,s2;cin >>s1>>s2;

    int ver = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) ver++;
    }
    int hor = 1e9;
    if (n % 2 == 0) {
        hor = 0;
        for (int i = 0; i < n; i += 2) {
            if (s1[i] != s1[i+1]) hor++;
            if (s2[i] != s2[i+1]) hor++;
        }
    }
    cout << min(ver, hor)<<endl;

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