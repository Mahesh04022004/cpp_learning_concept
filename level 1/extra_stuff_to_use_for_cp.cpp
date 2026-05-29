#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){

    // Integer limits
    int imax = INT_MAX;        // 2147483647
    int imin = INT_MIN;        // -2147483648

    // Long long limits (use this for CP)
    ll lmax = LLONG_MAX;       // 9.22e18
    ll lmin = LLONG_MIN;       // -9.22e18
    // For doubles
    double dmax = DBL_MAX;
    double dmin = DBL_MIN;     // Smallest positive (~2.2e-308)
    // Quick infinity for comparisons
    int INF = 1e9 + 7;         // Common CP infinity
    ll INF_LL = 1e18;          // For long long


    double x = 3.6;
    
    // Rounding
    double f1 = floor(x);      // 3.0 (toward -∞)
    double f2 = ceil(x);       // 4.0 (toward +∞)
    double f3 = round(x);      // 4.0 (standard rounding)
    double f4 = trunc(x);      // 3.0 (toward 0

    // Convert to integer
    int rounded = (int)round(x);     // 4
    int floored = (int)floor(x);     // 3
    
    // Powers and roots
    double pow2 = pow(2, 10);        // 1024.0
    double root = sqrt(144);         // 12.0
    double cube = cbrt(27);          // 3.0
    
    // Absolute values
    int abs_int = abs(-5);            // 5
    ll abs_ll = abs(-5000000000LL);   // 5000000000
    double abs_dbl = fabs(-5.7);      // 5.7 (or just abs(-5.7) works)
    // Check if power of two
    bool isPowerOfTwo = (x && !(x & (x - 1)));
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

