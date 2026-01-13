#include <bits/stdc++.h>
using namespace std;

#define fastio() ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define ll long long
#define MOD 1000000007

#define returnNO  {std::cout << "-1"  << std::endl; return;}
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
int n,k;

bool cmp(int i,int j){
    if((i%k == j%k)) return i<j;
    return (i%k) < (j%k);
}

void f()
{
    cin>>n>>k;
    vector<int>v;
    input(v,n);

    // shuffle array//
    vector<int>temp = v;
    sort(temp.begin(),temp.end(),cmp);
    int i = 0,j = n-1,cnt= 0;

    while(i<j){
        v[i++] = temp[cnt++];
        v[j--] = temp[cnt++];
    } 
    if(i == j) v[i] = temp[cnt];

    // calc ans //
    int lo = 0,hi = n-1,ans = 0;
    while(lo<hi){
        int x = abs(v[lo]-v[hi]);
        if(x%k == 0) ans += x/k;
        else returnNO;
        lo++;
        hi--;
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