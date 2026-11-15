#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO                        \
    {                                   \
        std::cout << "NO" << std::endl; \
        return;                         \
    }
#define returnYES                        \
    {                                    \
        std::cout << "YES" << std::endl; \
        return;                          \
    }
#define return1                        \
    {                                  \
        std::cout << "1" << std::endl; \
        return;                        \
    }
#define return0                        \
    {                                  \
        std::cout << "0" << std::endl; \
        return;                        \
    }
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
    // OBS - possible only when any ele >= 2 and ans will be sum -1:-1? 
    // if all are 1 except first and last ans = sum-n-1;
    int n;cin>>n;vector<int>v;input(v,n);
    unordered_map<int,int> mp;
    for(int i:v){
        mp[i]++;
    }
    if(mp.size()==1){
        if(mp[1]>0){
            cout<< -1<<endl;
            return;
        }
    }
    int ans = accumulate(v.begin(),v.end(),0);
    bool flag = false;
    for(int i=1;i<n-1;i++){
        if(v[i]>=2){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<ans-1<<endl;
    }
    else{
        cout<<ans-(n-1)<<endl;
    }

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