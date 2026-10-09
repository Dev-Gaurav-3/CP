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
    int n;cin>>n;string s;cin>>s;
    stack<int>st;
    vector<int>ans;
    for(int i = 0;i<n;i++){
        if(s[i] == '1') st.push(i+1);
        else if(s[i] == '2'){
            if(!st.empty()){
                st.pop();
                ans.push_back(i+1);
            }
        }
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    sort(ans.begin(),ans.end());
    cout << ans.size() << endl;
    for(int ch:ans){
        cout << ch << " ";
    }
    cout << endl;
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