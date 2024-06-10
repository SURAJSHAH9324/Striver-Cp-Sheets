#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int ml = (k * l) / nl ;
    int cl = c * d  ;
    int pl = p / np ;
    int ans = min({ml,cl,pl})  / n ;
    cout << ans ;
    return 0;
}
