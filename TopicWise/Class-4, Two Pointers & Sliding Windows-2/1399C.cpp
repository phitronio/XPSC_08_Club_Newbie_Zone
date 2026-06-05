#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i: a) cin >> i;

        map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }

        int final = 0;
        for(int s=2; s<=2*n; s++){
            int current=0;

            for(auto [x,cntx]:mp){
                int y = s-x;
                if(mp.find(y)!=mp.end()){
                    int cnty = mp[y];
                    current += min(cntx, cnty);
                }
            }
            
            current /=2;
            final = max(final, current);
        }

        cout << final << endl;
    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */