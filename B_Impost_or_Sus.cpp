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
    string str;
    cin>>str;
    int ans = 0;
    if(str[0] == 'u'){
        str[0] = 's';
        ans++;
    }
    int n = str.size();
    if(str[n-1] == 'u'){
        str[n-1] = 's';
        ans++;
    }
    for (int i = 1; i < n-1; i++)
    {
        if(str[i] == 'u'){
            if(str[i-1] != 's') {
                str[i-1] = 's';
                ans++;
            }
            if(str[i+1] != 's'){
                str[i+1] = 's';
                ans++;
            }
        }
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