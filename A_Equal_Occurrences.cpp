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

    unordered_map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int x = v[i];
        while(i<n && x == v[i]){
            cnt++;
            mp[cnt] += cnt;
            i++;
        }
        i--;
    }
    int maxi = INT_MIN;
    for(auto &x:mp){
        maxi = max(maxi,x.second);
    }

    cout<< maxi <<endl;


    
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