#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <queue>
#include <numeric>
#include <set>
using namespace std;


int main(){
    int N;
    cin >> N;
    int cnt = 0;
    long long res = 0;
    long long MIN = LLONG_MAX;

    for (int i = 0; i < N; i++) {
        long long A;
        cin >> A;
        if (A < 0) cnt++;
        res += abs(A);
        MIN = min(MIN, abs(A));
    }

    if (cnt % 2 == 1) res -= MIN * 2;
    cout << res << "\n";
    return 0;
}
