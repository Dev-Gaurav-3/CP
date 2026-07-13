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
    int n;cin>>n;vector<int>v;input(v,n);
    int ones = 0,twos = 0,threes = 0, i=0;
    bool flag = false;
    for (; i < n-2; i++)
    {
        if(v[i] == 1) ones++;
        else if(v[i] == 2) twos++;
        else if(v[i] == 3) threes++;
        if(ones >= twos+threes){
            flag = true;
            break;
        }
    }
    if(!flag) returnNO;
    ones = 0,twos =0 ,threes = 0,flag = false,i++;
    for (; i < n-1; i++)
    {
        if(v[i] == 1) ones++;
        else if(v[i] == 2) twos++;
        else if(v[i] == 3) threes++;
        if(threes <= twos+ones){
            flag = true;
            break;
        }
    }
    if(!flag) returnNO;
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