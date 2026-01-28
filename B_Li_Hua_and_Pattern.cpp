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
    int n,k;
    cin>>n>>k;
    
    vector<vector<int>>v(n,vector<int>(n)),mirror;
    for(auto &x:v){
        for(auto &y:x){
            cin>>y;
        }
    }
    mirror = v;
    reverse(mirror.begin(),mirror.end());
    for(auto &x:mirror){
        reverse(x.begin(),x.end());
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i][j] != mirror[i][j]) count++;
        }
    }
    count /= 2;
    if(k>=count&&(((k-count)%2==0)||(n%2==1)))returnYES;
    returnNO;
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