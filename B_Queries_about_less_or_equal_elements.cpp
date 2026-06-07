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

int bs(int tar,vector<int>&v){
    int l = 0,r = v.size()-1,ans = -1;
    while (l<=r)
    {
        int mid = l + (r-l)/2;
        if(v[mid] <= tar){
            ans = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return ans+1;
}

void f()
{
    int n,m;cin>>n>>m;
    vector<int>a,b;input(a,n);input(b,m);
    sort(a.begin(),a.end());
    vector<int>ans;
    for(int x : b){
        ans.push_back(bs(x,a));
    }
    print(ans);
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