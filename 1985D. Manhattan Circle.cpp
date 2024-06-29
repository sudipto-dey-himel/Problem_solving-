#include <bits/stdc++.h>

typedef long long ll;
typedef double ld;

#define endl '\n'
#define fi first
#define se second 
#define pb push_back
#define ppb pop_back
#define HA cout<<"YES"<<endl
#define NA cout<<"NO"<<endl
#define mem(a, b) memset(a, b, sizeof(a))
#define tc() ll t;cin>>t;while(t--)
#define all(V) (V).begin(), (V).end()
#define bug(a) cout << #a << " : " << a << endl;
#define sumV(a) accumulate(a.begin(), a.end(), 0LL)
#define mxV(V) *max_element(V.begin(), V.end())
#define mnV(V) *min_element(V.begin(), V.end())
#define mx(a, b, c) max(a, max(b, c))
#define mn(a, b, c) min(a, min(b, c))
#define ceiling(a, b) ((a / b) + (a % b != 0))
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define opt() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int MAX_SIZE = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ld EPS = LLONG_MIN;

using namespace std;

ll sumOfN(ll n) {
    ll ans = (n*(n+1))/2;
    return ans;
}

void solve() {
    ll n, m; cin >> n >> m;
    vector<string> grid(n);
    for(auto &x : grid) cin >> x;
    vector<ll> row, col;
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            if(grid[i][j] == '#') {
                row.pb(i+1); col.pb(j+1);
            }
        }
    }
    ll l1 = 0, r1 = row.size();
    ll l2 = 0, r2 = col.size();
    ll mid1 = (l1+r1) >> 1;
    ll mid2 = (l2+r2) >> 1;

    cout << row[mid1] << " " << col[mid2] << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}
