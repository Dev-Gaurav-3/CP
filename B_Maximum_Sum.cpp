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
    int n,k;
    cin>>n>>k;
    
    vector<int>v;
    input(v,n);

    sort(v.rbegin(),v.rend());
    deque<int>dq;
    for (auto &&i : v)
    {
        dq.push_back(i);
    }
    while(k--){
        int front = dq.front();
        int back1 = dq.back();
        dq.pop_back();
        int back2 = dq.back();
        if(front>(back1+back2)){
            dq.pop_back();
        }
        else{
            dq.push_back(back1);
            dq.pop_front();
        }
    }
    ll ans = 0;
    while(!dq.empty()){
        ans += dq.back();
        dq.pop_back(); 
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