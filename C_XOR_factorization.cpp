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

    if(k == 2){
        cout<<0 << " "<< n<<"\n";
        return ;
    }

    if(k%2 == 1){
        for(int i = 0;i<k;i++){
            cout<<n<<" ";
        }
        cout<<"\n";
        return ;
    }
    else{
        vector<int>ans;
        ans.push_back(1);
        ans.push_back(n-1);
        for(int i = 0;i<k-2;i++){
            ans.push_back(n);
        }
        print(ans);
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