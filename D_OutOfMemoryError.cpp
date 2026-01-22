#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "NO"  << std::endl; return;}
#define returnYES {std::cout << "YES" << std::endl; return;}
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
    ll n,m,h;
    cin >>n>>m>> h;

    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    vector<pair<int, int>> bc(m);
    for (int i = 0; i < m; i++) {
        cin >> bc[i].first >> bc[i].second;
    }

    int idx = 0;
    for (int i = m - 1; i >= 0; i--) {
        if (v[bc[i].first] + bc[i].second > h) {
            idx = i;
            break;
        }
    }

    vector<int> a = v;
    for (int i = idx; i < m; i++) {
        int b = bc[i].first;
        int c = bc[i].second;

        if (a[b] + c > h) {
            a = v;
        } else {
            a[b] += c;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
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