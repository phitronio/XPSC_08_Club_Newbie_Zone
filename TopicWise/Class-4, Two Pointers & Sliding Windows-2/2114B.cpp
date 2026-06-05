#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int good=0, zero=0, one=0, bad=0;
        for(int i=0; i<n/2; i++){
            if(s[i]==s[n-i-1]){
                good++;
                if(s[i]=='0') zero++;
                else one++;
            }
            else{
                bad++;
            }
        }

        if(good==k){
            cout << "YES" << endl;
        }
        else if(good<k){
            int barabo = k-good;
            if(barabo%2==0 && bad>=barabo){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else{
            int komabo = good-k;
            if(komabo%2==0 && komabo<=2*one && komabo<=2*zero) cout << "YES" << endl;
            else cout << "NO" << endl;
        }


    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */