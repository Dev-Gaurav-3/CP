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
    int n,k;cin>>n>>k; 
    vector<vector<int>>v(n,vector<int>(3));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>v[i][j];
        }
    }

    sort(v.begin(),v.end(),[](const vector<int>&a,const vector<int>&b){
        return a[0] < b[0];
    });
    int ans = k;

    for (int i = 0; i < n; i++)
    {
        if(v[i][0] > ans) break;
        ans = max(ans,v[i][2]);
    }

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