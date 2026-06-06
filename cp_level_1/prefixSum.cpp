#include <bits/stdc++.h>
using namespace std;

// usign prefix sum 

// prfix sum is a powerfull computational technique.
// Imagine you have an array and need to answer millions of queries, each asking for the sum of a range [l, r]. A brute-force approach of summing each range is O(N∗Q)O(N∗Q), which is far too slow.

// Prefix sums solve this by precomputing the cumulative sums. We define p[i] as the sum of the first i elements. Then, the sum of a range [l, r] is simply:
// sum(l, r) = p[r] - p[l-1]

// This reduces the time complexity from O(N∗Q)O(N∗Q) to O(N+Q)O(N+Q), which is a game-changer and is the only reason many problems are solvable under strict time limits

void solve(){
    int n ;
    cin >> n;
    vector<int> v(n);
    int q;
    cin >> q;
    for(int i = 0;i<n;i++){
        cin >> v[i];
    }
    vector<int> prefix(n + 1);
    int sum = 0;
    prefix[0] = 0;
    // calculating prefix sum here
    for(int i = 1;i<=n;i++){
        sum += v[i];
        prefix[i] = sum;
    }
    for(int i = 0;i<q;i++){
        int l,r;
        cin >> l >> r;
        
    }

}

int32_t main(){
    ios_base:sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;

    while(t-- > 0){
        solve();
    }
    return 0;
}