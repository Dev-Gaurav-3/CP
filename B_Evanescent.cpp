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
    for (auto &x : v) cout << x << " ";
    cout << "\n";
}

template <typename T>
void input(vector<T> &v, int n)
{
    v.resize(n);
    for (auto &x : v) cin >> x;
}

void f()
{
    int n;cin >> n;string s;cin >> s;
    int bl = 1;
    for (int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1]) bl++;
    }
    int ans = bl;
    for (int i = 1; i < n-1; i++)
    {
        int cur = bl;
        if (s[i] != s[i-1] && s[i] != s[i+1])
        {
            if (s[i-1] == s[i+ 1]) cur -= 2;
            else cur -= 1;
        }
        ans = min(ans, cur);
    }
    cout << ans << endl;
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