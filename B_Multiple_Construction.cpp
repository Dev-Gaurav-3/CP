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
    int n;
    cin>>n;
    if(n == 2){
        cout<<1<<" "<<2<<" "<<1<<" "<<2<<endl;
        return;
    }
    if(n == 1){
        cout<<1<<" "<<1<<endl;
        return;
    }
    vector<int>ans;
    int k = n;
    while(k>2){
        ans.push_back(k);
        k--;
    }
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(n);

    for(int i = n-1;i>0;i--){
        ans.push_back(ans[i]);
    }
    print(ans);
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