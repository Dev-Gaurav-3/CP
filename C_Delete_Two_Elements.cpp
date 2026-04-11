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
    vector<int>v;input(v,n);

    ll sum = accumulate(v.begin(), v.end(), 0LL),ans = 0 ;

    if ((2 * sum) % n != 0) { // If mean is not integer → impossible
        return0;
    }

    int target = (2 * sum) / n;

    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        int need = target - v[i];
        auto l = lower_bound(v.begin() + i + 1, v.end(), need);
        auto r = upper_bound(v.begin() + i + 1, v.end(), need);
        ans += (r - l);
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