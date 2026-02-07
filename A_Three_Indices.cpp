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
    int n;cin>>n;
    vector<int>v;input(v,n);
    
    for (int i = 0; i < n; i++)
    {
        int l = i-1,r= i+1;
        bool flag1 = false,flag2 = false;
        for (; l>=0; l--)
        {
            if(v[i] > v[l]){flag1 = true;break;}
        }
        for (; r < n; r++)
        {
            if(v[i] > v[r]){flag2= true;break;}
        }

        if(flag1 && flag2){
            cout<<"YES"<<endl<<l+1<<" "<<i+1<<" "<<r+1<<endl;
            return;
        }
    }
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