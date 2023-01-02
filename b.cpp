#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

// B. Hassam and Friends

void solve(int tt) {
    int n, m;
    cin >> n >> m;
    vector<int> mn(n + 1);

    for(int i = 1; i <= n; i++)
        mn[i] = n;

    for(int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        if(x > y)
            swap(x, y);
        mn[x] = min(mn[x], y - 1);
    }

    for(int i = n-1; i; --i) 
        mn[i] = min(mn[i], mn[i + 1]);

    ll ans = n;
    for(int i = 0; i < n; ++i)
        ans += (mn[i] - i);

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        solve(test);
        cout << "\n";
    }

    return 0;
}
