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
    int n;cin>>n;string a,b; cin>>a>>b;
    
    if(a == b) returnYES;
    if(n <= 2) returnNO;

    int OA = 0,OB = 0,EA = 0,EB = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == '1'){
            if(i&1) OA++;
            else EA++;
        }
        if(b[i] == '1'){
            if(i&1) OB++;
            else EB++;
        }
    }

    cout << ((OA ==OB && EA ==EB)? "YES" : "NO" ) << endl;
    
    
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