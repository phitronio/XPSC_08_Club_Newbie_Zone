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

    
    int i1, i2, i3;
    bool flg = false;

    for(int i=0; i<n; i++){
        int x = a[i].first;
        i1 = a[i].second;
        
        int target2 = target-x;
        
        int l=i+1, r=n-1;
        while(l<r){
            ll y=a[l].first;
            ll z=a[r].first;
    
            if(y+z==target2){
                i2 = a[l].second;
                i3 = a[r].second;
                flg = true;
                break;
            }
            else if(y+z>target2) r--;
            else l++;
        }

        if(flg) break;
    }

    if(flg==false){
        cout << "IMPOSSIBLE" << endl;
    }
    else{
        cout << i1 << " " << i2 << " " << i3 << endl;
    }



    return 0;
}
/*   Author: Hridoy Barua (CS Instructor Phitron)   */