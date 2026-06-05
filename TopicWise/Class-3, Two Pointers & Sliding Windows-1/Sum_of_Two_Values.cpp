#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n,target;
    cin >> n >> target;
    vector<pair<ll,int>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }

    sort(a.begin(), a.end());

    int l=0, r=n-1;
    bool flg = false;
    while(l<r){
        ll x=a[l].first;
        ll y=a[r].first;

        if(x+y==target){
            cout << a[l].second << " " << a[r].second << endl;
            flg = true;
            break;
        }
        else if(x+y>target) r--;
        else l++;
    }

    if(flg==false){
        cout << "IMPOSSIBLE" << endl;
    }



    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */