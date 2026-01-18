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

    map<int,char>mp;
    bool flag = true;
    for (auto &i : v)
    {
        if(flag){
            mp[i] = 'b';
            flag = false;
        }
        else{
            mp[i] = 'r';
            flag = true;
        }
    }
    char prev = ' ';
    for (auto &i : mp)
    {
        if(i.second != prev){
            prev = i.second;
        }
        else returnNO;
    }

    returnYES;

    
    
    

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