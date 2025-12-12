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

void f() {
    int n;
    cin >> n;

    vector<int> v;
    input(v, 2 * n);

    sort(v.begin(), v.end());

    int maxi = 1;
    int ans = 1;

    for (int i = 1; i < v.size(); i++) {
        if (v[i] == v[i - 1]) {
            ans++;
        } else {
            maxi = max(maxi, ans); // update maxi
            ans = 1;               // reset for next number
        }
    }

    maxi = max(maxi, ans); // last group

    cout << maxi << endl;
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