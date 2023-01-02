#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// A. Hossam and Combinatorics

void solve(int test) {
    ll n, ans;
	cin >> n;

    ll a[n];
	map<ll,ll> m;

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	    m[a[i]]++;
	}

	sort(a+1, a+n+1);

    if(a[1] == a[n]) {
        ans = (n * (n - 1)); 
    } else {
        ans = m[a[1]] * m[a[n]] * 2;
    }

	cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve(i);
    }

    return 0;
}
