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

// OBS - 
void f()
{
    int n;cin>>n;string s;cin>>s;

    unordered_map<char,char>mp;
    int l = 0,r = n-1,op = 0;

    while(l<r){
        if(s[l] != s[r]){
            char a = min(s[l], s[r]);
            char b = max(s[l], s[r]);

            for (char c = a + 1; c <= b; c++)
            {
                if (!mp[c - 'a'])
                {
                    mp[c - 'a'] = true;
                    op++;
                }
            }
        }
        l++;r--;
    }

    cout << op << endl;
    
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