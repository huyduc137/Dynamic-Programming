# include <bits/stdc++.h>
# define ll long long
# define TASK "TROCHOI"
# define ld long double
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
using namespace std;
typedef pair <ll , ll> pi;
typedef vector <pi> vii;
const ll maxn = 1e6 + 6;
const ll mod = 1e9 + 7;
ll n , x, dp[maxn] , a[maxn];
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    for (ll i = 1 ;i <= n ; i++) cin >> a[i];
    dp[0] = 1;
    for (ll i = 1; i <= x ; i++)
    {
        for (ll j = 1 ; j <= n ; j++)
        {
            if (a[j] <= i) dp[i] = (dp[i] + dp[i-a[j]]) % mod;
        }
    }
    cout << dp[x];
}