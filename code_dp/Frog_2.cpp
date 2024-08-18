# include <bits/stdc++.h>
# define ll long long
using namespace std;
int main()
{
    ll n , k; cin >> n >> k;
    ll a[n+5] , f[n+5];
    for (ll i = 1 ;i <= n; i++) cin >> a[i];
    f[1] = 0;
    for (ll i = 2 ; i <= n ; i++)
    {
        f[i] = abs(a[i]- a[i-1]) + f[i-1];
        ll check = max((ll)1 , i-k);
        for (ll j = i-2 ; j >= check ; j--)
        {
            f[i] = min(f[i] , abs(a[i] - a[j]) + f[j]);
            //cout << "f[" << i << "]" << ": " << f[i] << endl;
        }
    }

    cout << f[n];
}
