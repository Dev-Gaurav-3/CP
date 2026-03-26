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
    string s;cin>>s;
    unordered_map<int,int>mp1;
    unordered_map<int,int>mp2;

    for(auto &x:s) mp1[x]++;

    int maxi = mp1.size();
    for(auto &x:s){
        mp1[x]--;
        if(mp1[x] == 0) mp1.erase(x);
        mp2[x]++;
        maxi = max(maxi,(int)(mp1.size()+mp2.size()));
    }
    cout << maxi << endl;


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