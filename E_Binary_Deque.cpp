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
    int n,s,curr= 0;cin>>n>>s;vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        curr += v[i];
    }
    if(curr < s){
        cout << -1 << endl;
        return ;
    }
    if(curr == s) return0;
    int l = 0, ones = 0;
    int maxi = -1;

    for (int r = 0; r < n; r++) {
        ones += v[r];
        while (ones> s) {
            ones -= v[l];
            l++;
        }
        if (ones == s) {
            maxi = max(maxi, r-l+1);
        }
    }
    cout << n-maxi << endl;
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