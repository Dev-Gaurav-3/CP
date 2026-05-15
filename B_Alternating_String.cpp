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

bool isvalid(string s){
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i] == s[i+1]) return false;
    }
    return true;
}

void f()
{
    string s;cin>>s;
    int cnt = 0;
    for (int i = 0; i < s.size()-1; i++) {
        if (s[i] == s[i + 1]) {
            cnt++;
        }
    }
    if (cnt <= 2) returnYES;
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