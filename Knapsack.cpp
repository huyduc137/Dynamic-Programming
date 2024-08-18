# include <bits/stdc++.h>
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
# define huy_dep_trai int main
using namespace std;
using ll = long long;
using ld = long double;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll mod = 14062008;
const ll base = 31;
const ll maxn = 2e3 + 5;

ll dp[105][100005];

huy_dep_trai()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n , w; cin >> n >> w;
    pi a[n+5];
    for (ll i = 1 ; i <= n ; i++) cin >> a[i].fi >> a[i].se;
    for (ll i = 1 ; i <= n ; i++)
    {
        for (ll j = 0 ; j <= w ; j++)
        {
            dp[i][j] = dp[i-1][j];
            if (a[i].fi <= j)
            {
                dp[i][j] = max(dp[i][j] , dp[i-1][j-a[i].fi] + a[i].se);
            }
        }
    }
    cout << dp[n][w];
}
