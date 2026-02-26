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

bool dig(int n){
    int ans = 0;
    while(n>0){
        ans++;
        n /= 10;
    }
    return (ans != 1) ? true:false;
}

void f()
{
    int n;cin>>n;
    int ans = 0;
    while(dig(n)){
        int k = n;
        int sum = 0;
        while(k>0){
            sum += k%10;
            k /= 10;
        }
        n = sum;
        ans++;
    }
    cout << ans << endl;
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