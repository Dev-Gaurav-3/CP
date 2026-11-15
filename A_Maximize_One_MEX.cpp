#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO                        \
    {                                   \
        std::cout << "NO" << std::endl; \
        return;                         \
    }
#define returnYES                        \
    {                                    \
        std::cout << "YES" << std::endl; \
        return;                          \
    }
#define return1                        \
    {                                  \
        std::cout << "1" << std::endl; \
        return;                        \
    }
#define return0                        \
    {                                  \
        std::cout << "0" << std::endl; \
        return;                        \
    }
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

// OBS - 
void f()
{
    int n,k;cin>>n>>k;vector<int>v;input(v,n);

    if(k == 1) {
        cout << -1 << endl;
        return ;
    }
    int a = 0,b = 0;
    for (int i = 0; i < n-k+1; i++)
    {
        if(v[i] > v[a]){
            a = i;
        }
    }
    for (int i = n-k+1; i < n; i++)
    {
        if(v[i] < v[b]){
            b = i;
        }
    }
    
    if(v[a] > v[b]){
        cout << a+1<<" "<<b+1 << endl;
    }
    else{
        cout << -1 << endl;
    }
    
    
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