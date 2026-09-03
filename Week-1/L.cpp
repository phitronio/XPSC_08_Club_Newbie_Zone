#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fir first
#define sec second
#define make_pair mkp
#define push_back pb
#define lep( i, l, r ) for ( int i = ( l ); i <= ( r ); ++ i )
#define rep( i, r, l ) for ( int i = ( r ); i >= ( l ); -- i )

typedef long long ll;
typedef long double ld;
typedef pair < int, int > pii;

char _c; bool _f; template < class type > inline void read ( type &x ) {
	_f = 0, x = 0;
	while ( _c = getchar (), !isdigit ( _c ) ) if ( _c == '-' ) _f = 1;
	while ( isdigit ( _c ) ) x = x * 10 + _c - '0', _c = getchar (); if ( _f ) { x = -x; }
}

template < class type > inline void chkmin ( type &x, type y ) { x = ( x <= y ? x : y ); }
template < class type > inline void chkmax ( type &x, type y ) { x = ( x >= y ? x : y ); }

const int N = 105;

int t, n;
int a[N];

void Solve () {
	cin >> t;
	while ( t -- ) {
		cin >> n;
		for ( int i = 1; i <= n; i ++ ) {
			cin >> a[i];
		}
		for ( int i = 1; i <= n; i ++ ) {
			cout << n - a[i] + 1 << " ";	
		}
		cout << '\n';
	}
}

signed main () {
#ifdef judge
  freopen ( "test.in", "r", stdin );
  freopen ( "test.out", "w", stdout );
  freopen ( "test.err", "w", stderr );
#endif
  Solve ();
	return 0;
}
