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
    string s;cin >> s;
    if (s.size() == 1) return0;
    bool flag = false;
    int ans = 0;

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == 'V' && s[i+1] == 'K') ans++;
        if (s[i] == 'K' && s[i+1] == 'K' && !flag){

            if ((i == 0 || s[i-1] != 'V') || (i < s.size()-2 && s[i+2] == 'K')){
                ans++;
                flag = true;
            }
        }

        if (s[i] == 'V' && s[i+1] == 'V' && !flag){

            if ((i > 0 && s[i-1] == 'V') || (i >= s.size() -2 || s[i+2] != 'K')){
                ans++;
                flag = true;
            }
        }
    }

    cout << ans << endl;
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