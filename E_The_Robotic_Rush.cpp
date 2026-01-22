#include <bits/stdc++.h>

using namespace std;


int main() {

    int t, n, m, k; 

    cin >> t;

    while (t--) {
        map<int, int> mp1;
        map<int, int> mp2;
        
        cin >> n >>m>>k;

        for (int i = 0; i<n; i++) {
            int x; 
            cin>> x;
            mp1[x] = 1; 
        }

        for (int j=0; j < m; j++) {
            int y; cin >> y;
            mp2[y] = 1;
        }

        string s;
        cin >> s;

        for (int a = 0; a < k; a++) {

            map<int, int> temp;
            int count = 0; //total failure

            if (s[a] == 'L') {
                int tempnum=0; // iss bari ke failure
                for (auto ele : mp1) {

                    if (ele.second != 0) {
                        int new_pos = ele.first - 1;

                        if (mp2.find(new_pos) != mp2.end()) {
                            temp[new_pos] = 0;
                            tempnum++;

                        } 
                        else {
                            temp[new_pos] = 1;
                        }
                    }
                    else {
                        temp[ele.first] = 0;
                    }
                }

                mp1 = temp;
                count=count+tempnum;
                n=n-tempnum;// n ko hi update karna bhula
                cout << n <<" ";
            }

            else if (s[a] == 'R') {

                int tempnum=0;

                for (auto ele : mp1) {

                    if (ele.second != 0) {
                        int new_pos = ele.first +1;

                        if (mp2.find(new_pos) != mp2.end()) {
                            temp[new_pos] = 0;
                            tempnum++;
                        } 
                        else {
                            temp[new_pos] = 1;
                        }
                    }
                    else {
                        temp[ele.first] = 0;
                    }
                }

                mp1 = temp;
                count=count+tempnum;
                n=n-tempnum;// n ko hi update karna bhula
                cout << n<<" ";
            }
        }

        cout << endl;

        mp1.clear(); // AGLI BAAR MAP EMPTY KARNA MAT BHULNA 
        mp2.clear();
    }
    return 0;
}