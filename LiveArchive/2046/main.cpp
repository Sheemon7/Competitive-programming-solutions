#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;

#define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i, n) for(int i=0;i<(n);i++)
#define FOR(i, a, b) for(int i=(a);i<=(b);i++)
#define FORD(i, a, b) for(int i=(a);i>=(b);i--)

inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }

ll fast_exp(ll a, ll p, ll M) {
	ll res = 1;
	while(p > 0) {
		if (p&1) res = (res * a) % M;
		a = (a*a) % M;
		p /= 2;
	}
	return res;
}

int main() {
    ios::sync_with_stdio(false);
    int T, M, N;
    cin >> T;
    while (T-- > 0) {


    }
    return 0;
}