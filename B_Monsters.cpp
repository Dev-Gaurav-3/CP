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

void f() {
    int n, k;cin >> n >> k;
    vector<pair<int,int>> v;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        int rem = x % k;
        if (rem == 0) rem = k;
        v.push_back({rem, i});
    }
    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    });
    for (auto &x : v) {
        cout << x.second + 1 << " ";
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