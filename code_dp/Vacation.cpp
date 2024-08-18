# include <bits/stdc++.h>
using namespace std;
# define ll long long
int main()
{
    ll n; cin >> n;
    ll a[n+5][3] , dp[n+5][3];
    for (ll i = 1 ; i <= n ; i++)
    {
        for (ll j = 1 ; j <= 3 ; j++) cin >> a[i][j];
    }
    dp[1][1] = a[1][1];
    dp[1][2] = a[1][2];
    dp[1][3] = a[1][3];
    for (ll i = 2 ; i <= n ; i++)
    {
        for (ll j = 1 ; j <= 3 ; j++)
        {
            if (j == 1)
            {
                dp[i][j] = max(a[i][j] + dp[i-1][j+1] , a[i][j] + dp[i-1][j+2]);
            }
            else if (j == 2)
            {
                dp[i][j] = max(a[i][j] + dp[i-1][j-1] , a[i][j] + dp[i-1][j+1]);
            }
            else
            {
                dp[i][j] = max(a[i][j] + dp[i-1][j-1] , a[i][j] + dp[i-1][j-2]);
            }
        }
    }
    ll maxx = INT_MIN;
    for (ll i = 1 ; i <= 3 ; i++)
    {
        if (dp[n][i] > maxx)
        {
            maxx = dp[n][i];
        }
    }
    cout << maxx;
}
