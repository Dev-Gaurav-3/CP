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
    int a,b;
    cin>>a>>b;

    int cnt = 1;
    int mini = 0;
    int maxi = 0;
    int ans = 0;
    if(b<a) swap(a,b);
    while(true){
        mini += cnt;
        swap(mini,maxi);
        if(mini <= a && maxi <= b){
            cnt *= 2;
            ans++;
        }
        else break;
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