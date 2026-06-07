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
    int n,q;cin>>n>>q;
    vector<int>v;input(v,n);
    ll sum = accumulate(v.begin(),v.end(),0LL);
    ll allval = -1;bool flag = false;
    unordered_map<int,int>mp;
    while(q--){
        int t;cin>>t;
        if(t == 1){
            int idx,val;cin>>idx>>val;
            idx--;
            ll old;

            if(mp.count(idx)) old = mp[idx];

            else if(flag) old = allval;
            else old = v[idx];
            sum -= old;
            sum += val;
            mp[idx] = val;
        }
        else{
            int val;cin>>val;
            sum = 1LL*n*val;
            allval = val;
            flag = true;
            mp.clear();
        }
        cout << sum << endl;
    }
}

int main()
{
    fastio();
    int t = 1;
    // cin >> t;
    
    while (t--)
    {
        f();
    }
    return 0;
}