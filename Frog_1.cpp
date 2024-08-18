# include <bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
    ll n; cin >> n;
    ll a[n+2] , dp[n+3];
    for (ll i =1 ; i <= n ; i++)cin >> a[i];
    dp[1] = 0 , dp[2] = abs(a[1]- a[2]);
    for(ll i = 3 ; i <= n ; i++)
    {
        dp[i] = min(dp[i-1] + abs(a[i] - a[i-1]) , dp[i-2] + abs(a[i] - a[i-2]));
    }
    cout << dp[n];
}
