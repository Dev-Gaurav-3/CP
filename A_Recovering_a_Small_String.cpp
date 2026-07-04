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
    int n;cin >> n; string s = "";
    while (n > 27) {
        s += 'z';   
        n -= 26;
    }
    if (s.size() == 2) {
        s += char('a' + n - 1);
    }
    else if (s.size() == 1) {
        s += char('a' + n - 2);
        s += 'a';
    }
    else {
        s += "aa";
        s += char('a' + n - 3);
        cout << s << endl;
        return;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
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