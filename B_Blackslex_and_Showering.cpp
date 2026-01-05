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

    int sum = 0;
    for(int i = 1;i<n;i++){
        sum += abs(v[i] - v[i-1]);
    }
    int ans = INT_MAX;
    for (int i = 1; i < n-1; i++)
    {
        int temp = abs(v[i] - v[i-1]) + abs(v[i+1]-v[i]);
        int k = sum;
        k -= temp;
        k += abs(v[i+1] - v[i-1]);

        ans = min(k,ans);
    }
    int k1 = sum - abs(v[n-1] - v[n-2]);
    ans = min(ans,k1);
    int k2 = sum - abs(v[0] - v[1]);
    ans = min(ans,k2);

    cout<< ans <<endl;
    
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