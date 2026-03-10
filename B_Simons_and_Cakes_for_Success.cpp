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
    int n;cin>>n;
    unordered_set<int>factors;
    while (n % 2 == 0) {
        factors.insert(2);
        n /= 2;
    }

    for (int i = 3; i*i <= n; i += 2) {
        while (n % i == 0) {
            factors.insert(i);
            n /= i;
        }
    }
    if (n > 2) factors.insert(n);
    ll prod = 1;
    for (auto it : factors)
    {
        prod *= it;
    }
    cout << prod << endl;
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