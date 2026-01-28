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
    int n;
    cin >> n;

    vector<int> a, b;
    input(a, n);
    input(b, n);

    int l = 0, r = n - 1;

    while (l < n && a[l] == b[l]) l++;
    while (r >= 0 && a[r] == b[r]) r--;

    if (l > r) {
        cout << "1 1\n";
        return;
    }

    int mn = INT_MAX, mx = INT_MIN;
    for (int i = l; i <= r; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    while (l > 0 && a[l - 1] > mn) {
        l--;
    }

    while (r < n - 1 && a[r + 1] < mx) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << "\n";
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