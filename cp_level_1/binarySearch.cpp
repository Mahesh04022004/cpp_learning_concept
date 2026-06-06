#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';

// Practice question for interview 
// LEETCODE
// Easy
//     704. Binary Search – classic.
//     35. Search Insert Position – lower bound.
//     278. First Bad Version – binary search on answer.
// Medium
//     33. Search in Rotated Sorted Array – detect which half is sorted.
//     34. Find First and Last Position – lower_bound + upper_bound.
//     74. Search a 2D Matrix – treat 2D as 1D.
//     153. Find Minimum in Rotated Sorted Array – compare mid with right.
//     162. Find Peak Element – binary search without sorting.
//     875. Koko Eating Bananas – binary search on answer.
//     1011. Capacity To Ship Packages – classic “minimize max” predicate.
//     1283. Find the Smallest Divisor – similar to above.
// Hard
//     4. Median of Two Sorted Arrays – binary search on partition.
//     410. Split Array Largest Sum – predicate “can split into m subarrays with max sum ≤ mid”.
//     1482. Minimum Number of Days – another “minimize max” with adjacency.

// Codeforces (rated ~1200–1600)
//     CF 448D – Multiplication Table – binary search on answer with counting.
//     CF 371C – Hamburgers – BS on the number of hamburgers.
//     CF 1155C – Alarm Clocks Everywhere – BS on start time.
//     CF 1100E – Ehab and a component choosing – BS + DFS.


int binarySearch(int target,vector<int> v){
    int l = 0;
    int r = v.size() - 1;

    while(l <= r){
        int mid = l + (r - l) / 2;
        if(v[mid] == target){
            return mid;
        }else if(v[mid] > target){
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }
    return -1;
}

void solve(){
    cout<<"working..."<<nl;
    cout<<"This in the new Line..."<<nl;
    vector<int> t = {2,5,8,12,14,99,100};
    int res = binarySearch(12 , t);
    cout << res << nl;
}



int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    while(t-- > 0){
        solve();
    }

    return 0;
}