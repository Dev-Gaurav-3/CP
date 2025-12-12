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
    int n,a;
    cin>>n>>a;
    vector<int>v;
    input(v,n);

    int x = 0,y=0,z = 0;
    for(int i :v){
        if(i<a) x++;
        else if(i == a) y++;
        else{
            z++;
        }
    }
    if(y == n) cout<<1337<<endl;
    else if(x>=z){
        cout<<a-1<<endl;
    }
    else{
        cout<<a+1<<endl;
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