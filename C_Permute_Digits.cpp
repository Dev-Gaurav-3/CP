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
    ll a,b;cin>>a>>b;
    string s = "";
    while(a>0){
        s += to_string(a%10);
        a /= 10;
    }
    sort(s.rbegin(),s.rend());
    for (int i = 0; i < s.size(); i++)
    {
        ll ans = 0;
        ans += s[i] - '0';
        for (int j = 0; j < s.size(); j++)
        {
            if(i == j) continue;
            ans *= 10;
            ans += s[j] - '0';
        }
        if(ans<b){
            cout << ans << endl;
            return;
        }
    }
}

int main()
{
    fastio();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        f();
    }
    return 0;
}