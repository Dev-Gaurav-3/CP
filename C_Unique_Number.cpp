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

int digitSum(int x){
    if(x<10) return x;
    int num1 = x%10;
    x /= 10;
    return num1+x;
}

void f()
{
    int n;cin>>n;
    for (int x = 1; x <= 100; x++)
    {
         if(x%11 == 0){
            continue;
        }
        if(digitSum(x) == n){
            cout << x << endl;
            return ;
        }
    }
    
    cout << -1 << endl;
    return ;
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