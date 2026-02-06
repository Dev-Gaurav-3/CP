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
    int n,cnt = 0;cin>>n;
    string s;cin>>s;
    stack<char>st;

    for (int i = 0; i < n; i++)
    {
        if(st.empty()) st.push(s[i]);
        else{
            if(s[i] == '(') st.push(s[i]);
            else if(st.top() == '('){
                st.pop();
            }
            else cnt++;
        }
    }

    cout<< (st.size()+cnt)/2 <<endl;
    
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