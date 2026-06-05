#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,x;
    cin >> n >> x;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    int l=0, r=0;
    ll cnt=0;
    ll sum=0;

    while(r<n){
        sum += a[r];
        while(l<r && sum>x){
            sum -= a[l];
            l++;
        }
        if(sum==x) cnt++;

        r++;
    }

    cout << cnt << endl;

    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */