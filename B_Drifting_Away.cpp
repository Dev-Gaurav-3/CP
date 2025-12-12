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
    string s;
    cin >> s;

        int n = s.size();
        s += '0';

        int ans = 0, s1 = 0, s2 = 0, s3 = 0;

        for(int i = 0; i < n; i++)
        {
        if(s[i]=='*' && s[i+1]=='*') ans = -1;
        if(s[i]=='>' && s[i+1]=='<') ans = -1;
        if(s[i]=='>' && s[i+1]=='*') ans = -1;
        if(s[i]=='*' && s[i+1]=='<') ans = -1;

        if(s[i]=='>') s1++;
        if(s[i]=='<') s2++;
        if(s[i]=='*') s3++;
        }

    if(ans == -1) cout << -1 << endl;
    else cout << max(s1, s2) + s3 << endl;

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