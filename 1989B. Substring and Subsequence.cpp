#include <bits/stdc++.h>
using namespace std;

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

void solve() {
    string s1, s2; cin >> s1 >> s2;
    if(s1 == s2) {
        cout << s1.size() << endl; return;
    }
    ll ans = INF;
    for(ll i=0; i<s2.size(); i++) {
        ll id = i, cnt = 0;
        for(ll j=0; j<s1.size(); j++) {
            if(s1[j] == s2[id]) id++, cnt++;
        }
        ans = min(ans, ((ll)s2.size() - cnt));
    }
    cout << ans + s1.size() << endl;
}

int main() {
    opt();
    tc() {
        solve();
    }
    return 0;
}