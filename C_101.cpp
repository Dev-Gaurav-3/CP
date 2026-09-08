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
    int n;cin>>n;vector<int>v;input(v, n);

    vector<int>one;
    for(int i = 0; i < n; i++){
        if(v[i] == 1) one.push_back(i);
    }

    int l = -1,r = -1,ans = 0;

    if (one.empty()) {
        for(int i = 0; i < n; i++) {
            if(v[i] == -1) {
                if(l == -1) l = i;
                r = i;
            }
        }
    }
    else {

        for (int i = 1; i < one.size(); i++) {
            if (one[i] - one[i-1] > ans) {
                ans = one[i] - one[i-1];
                l = one[i-1];
                r = one[i];
            }
        }

        for (int i = 0; i < one[0]; i++) {
            if (v[i] == -1) {
                if (one[0] - i > ans) {
                    ans = one[0] - i;
                    l = i;
                    r = one[0];
                }
                break;
            }
        }

        for (int i = n-1; i > one.back(); i--) {
            if (v[i] == -1) {
                if (i - one.back() > ans) {
                    ans = i - one.back();
                    l = one.back();
                    r = i;
                }
                break;
            }
        }
    }


    for (int &x : v) {
        if (x == -1) x = 0;
    }

    if (l != -1) {
        v[l] = 1;
        v[r] = 1;
    }

    print(v);
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