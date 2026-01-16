#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int>v = {73,74,75,71,69,72,76,73};
    stack<int>st;
    vector<int>ans(v.size(),0);

    for (int i = 0; i < v.size(); i++)
    {
        while(!st.empty() && v[i] > v[st.top()]){
            int idx = st.top();
            st.pop();
            ans[idx] = i-idx;
        }
        st.push(i);
    }

    for(auto &x:ans){
        cout<<x<<" ";
    }
    

  return 0;
}
