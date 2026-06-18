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
    int n,q;cin>>n>>q;
    vector<int> pos(51, -1);

    for (int i = 1; i <= n; i++) {
        int x;cin >> x;
        if (pos[x] == -1) pos[x] = i;
    }

    while (q--) {
        int x;cin >> x;
        int p = pos[x];
        cout << p << " ";
        for (int i = 1; i <= 50; i++) {
            if (pos[i] < p)
                pos[i]++;
        }
        pos[x] = 1;
    }
    cout << endl;
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