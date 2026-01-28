#include <bits/stdc++.h>

using namespace std;

int evencheck(vector<int>& v, int n, int count, int rows, int col,int margin){
    
    int mid=n/2;

    if(v[mid-1]>max(rows,col) || v[mid]<min(rows,col)){
        count++;
        if(n-2==0){
            return 0;
        }

        v.erase(v.begin()+ mid-1);
        v.erase(v.begin()+ mid-1);
        
        return evencheck(v,n-2,count,rows,col,margin);
    }

    else{
        return margin-count;
    }

}

int oddcheck(vector<int>& v, int n, int count, int rows, int col,int margin){
    
    int mid=n/2;

    if(v[mid-2]>max(rows,col) || v[mid]<min(rows,col)){
        count++;
        if(n-3==0){
            return 0;
        }
        v.erase(v.begin()+ mid-1);
        v.erase(v.begin()+ mid );
        
        return evencheck(v,n-2,count,rows,col,margin);
    }
    else{
        return margin-count;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,h,l;
        cin >> n >> h >> l;


        vector<int> v;

        for(int i=0;i<n;i++){
            int ele;
            cin >> ele;
            if(ele<= max(h,l)){
            v.push_back(ele);
            }
        }

        if(v.size()==0 || v.size()==1){
            cout << 0 << endl;
            continue;
        }

        sort(v.rbegin(),v.rend());
        if(v.size()%2==0){
            cout << evencheck(v,v.size(),0,h,l,v.size()/2) << endl ;
            continue;
        }
        else{
            cout << oddcheck(v,v.size(),0,h,l,v.size()/2) << endl ;
            continue;
        }

    }
    
}