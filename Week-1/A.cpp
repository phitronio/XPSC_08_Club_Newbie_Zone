#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, k;
    cin >> x >> y >> k;

    if((x - y) >= (-1 * k) && (x - y) <= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
