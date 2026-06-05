#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc=1;
    cin >> tc;
    while(tc--){
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n), h(n);
        for(auto &i: a) cin >> i;
        for(auto &i: h) cin >> i;

        int l=0, r=1, len=0;
        ll sum = a[0];
        if(sum<=k) len=1;

        while(r<n){
            if(h[r-1]%h[r]==0){
                sum += a[r];
            }
            else{
                l=r;
                sum = a[r];
                if(sum<=k) len=max(len,1);
                r++;
                continue;
            }

            while(l<=r && sum>k){
                sum-=a[l];
                l++;
            }

            len = max(len, r-l+1);
            r++;
        }
        
        cout << len << endl;

    }

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */