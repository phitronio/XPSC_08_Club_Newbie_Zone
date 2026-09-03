#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int x = ((A + C - 1) / C) * C;
    if (x <= B)
        cout << x << endl;
    else
        cout << -1 << endl;

    return 0;
}
