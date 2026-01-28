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
    int n, q, l, r;
    vector<int> a, b;
    cin >> n >> q;
    input(a, n);
    input(b, n);

    vector<int> A(n), B(n), maxi(n);

    A[n-1] = a[n-1];
    for (int i = n-2; i >= 0; i--) {
        A[i] = max(a[i], A[i+1]);
    }
    B[n-1] = b[n-1];
    for (int i = n-2; i >= 0; i--) {
        B[i] = max(b[i], B[i+1]);
    }

    for (int i = 0; i < n; i++) {
        maxi[i] = max(A[i], B[i]);
    }

    for (int i = 1; i < n; i++) {
        maxi[i] += maxi[i-1];
    }

    while (q--) {
        cin >> l >> r;
        l--, r--;
        if (l == 0) cout << maxi[r] << " ";
        else cout << maxi[r] - maxi[l-1] << " ";
    }
    cout << endl;
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