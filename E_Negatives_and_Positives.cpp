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
    cin>>n;
    vector<int>v;
    input(v,n);

    ll sum = 0;
    int neg = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(v[i] < 0) neg++;
        sum += abs(v[i]);
        mini = min(mini,abs(v[i]));

    }
    if(neg%2 == 0) cout<< sum <<endl;
    else cout<< sum - 2*mini <<endl;

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