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

vector<int>primes;
void before() {
    int n = 200000;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i)
                isPrime[j] = false;
        }
    }

    for (int i = 2; i < n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
}

void f()
{
    int n;cin>>n;
    vector<long long> a(n);

    a[0] = primes[0];
    for (int i = 1; i < n - 1; i++) {
        a[i] = 1LL * primes[i - 1] * primes[i];
    }

    a[n - 1] = primes[n - 2];

    print(a);

}

int main()
{
    fastio();
    int t = 1;
    cin >> t;
    before();
    while (t--)
    {
        f();
    }
    return 0;
}