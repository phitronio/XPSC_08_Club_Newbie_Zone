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

        bool flg=false;
        int mx=a[0];
        int x,y;
        for(int i=1; i<n; i++){
            if(mx> a[i]){
                flg = true;
                x=mx, y=a[i];
                break;
            }
            mx = max(mx, a[i]);
        }

        if(flg){
            cout << "YES" << endl;
            cout << 2 << endl;
            cout << x << " " << y << endl;
        }
        else cout << "NO" << endl;


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */