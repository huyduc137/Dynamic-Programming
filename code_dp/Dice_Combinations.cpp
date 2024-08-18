# include <bits/stdc++.h>
# define ll long long
# define ld long double
# define fi first
# define se second
# define all(a) a.begin() , a.end()
# define ms(a , n) memset(a , n , sizeof(a))
# define endl "\n"
using namespace std;
typedef pair <ll , ll> pii;
typedef vector <pii> vii;
typedef vector <ll> vi;
const ll maxn = 1e6+5;
const ll mod = 1e9 + 7;
ll dp[maxn];
 
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    dp[0] = 1;
    for (ll i = 1 ; i <= n ; i++)
    {
        for (ll j = 1 ; j <= 6 ; j++)
        {
            if (i >= j) dp[i] = (dp[i] + dp[i-j]) % mod;
        }
    }
    cout << dp[n];
}