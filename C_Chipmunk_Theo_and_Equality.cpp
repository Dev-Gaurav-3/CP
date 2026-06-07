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

int cost(int x,vector<int>&v) {
    int op = 0;
    for (int num : v) {
        int curr = num;
        int steps = 0;
        while (curr != x) {
            if (curr&1) curr++;
            else curr /= 2;
            steps++;
            if (steps > 1000) return INT_MAX;
        }
        op += steps;
    }
    return op;
}

void f()
{
    int n;cin>>n;
    vector<int>v;input(v,n);
    int mini = *min_element(v.begin(),v.end());
    int ans = min(cost(mini,v),cost(mini+1,v));

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