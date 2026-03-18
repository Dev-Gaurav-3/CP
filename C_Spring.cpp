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

ll lcm(ll a,ll b){
    return a/__gcd(a,b)*b;
}

void f(){
    ll a,b,c,m;cin>>a>>b>>c>>m;

    ll ans1 = m/a;ll ans2 = m/b;ll ans3 = m/c;
    ll ab = m/lcm(a,b);
    ll ac = m/lcm(a,c);
    ll bc = m/lcm(b,c);
    ll abc = m/lcm(a,lcm(b,c));
    ll onlya = ans1-ab-ac+abc;
    ll onlyb = ans2-ab-bc+abc;
    ll onlyc = ans3-ac-bc+abc;
    ll abonly = ab-abc;
    ll aconly = ac-abc;
    ll bconly = bc-abc;

    ll alice = onlya*6 + abonly*3 + aconly*3 + abc*2;
    ll bob   = onlyb*6 + abonly*3 + bconly*3 + abc*2;
    ll carol = onlyc*6 + aconly*3 + bconly*3 + abc*2;

    cout<<alice<<" "<<bob<<" "<<carol<<"\n";
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