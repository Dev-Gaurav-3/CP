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

void f() {
    int n, l, r;
    cin >> n >> l >> r;

    vector<int> a(n);
    int cur = 1;

    for (int i = 0; i < n; i++) {
        a[i] = cur;
        cur <<= 1; // powers of 2 → all prefix XORs unique
    }

    // Make XOR[l..r] = 0
    a[l-1] = a[l-1] ^ a[r-1];

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
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