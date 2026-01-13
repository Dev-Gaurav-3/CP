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
    string s;
    cin>>s;

    int ones = 0,zero = 0;
    for(char &i : s){
        if(i == '0') zero++;
        else ones++;
    }
    for(auto &x:s){
        if(x == '1' && zero>0){
            zero--;
        }
        else if(x == '0' && ones>0){
            ones--;
        }
        else{
            break;
        }
    }
    cout<< zero+ones <<endl;
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