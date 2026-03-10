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

vector<int> primeFactors(int n){
    vector<int> pf;
    for(int i = 2; i * i <= n; i++){
        while(n % i == 0){
            pf.push_back(i);
            n /= i;
        }
    }
    if(n > 1) pf.push_back(n);
    return pf;
}

void f()
{
    int a,b;cin>>a>>b;
    vector<int>primes = primeFactors(b);
    int mx = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        int calc = a*primes[i] + (b/primes[i]);
        if(!(calc&1)){
            mx = max(mx,calc);
        }
    }
    cout << ((mx == 0)? -1:mx) << endl;

    
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