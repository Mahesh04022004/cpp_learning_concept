#include <bits/stdc++.h>
using namespace std;

constexpr char nl = '\n';
void solve(){
    map<string,int> map; // use to store key value pair >>> output is sorted based on key
    map.insert({"Mahesh",3}); // one way to insert
    map.insert({"Harsh",2});
    map.insert({"Akshat",4});

    for(auto x : map){
        cout << "Key : " << x.first << " Value : " << x.second<<nl;
    }

    map["Mahesh"] = 30; // another way of inserting in map
    map["Gungun"] = 50;

    cout<<"After making changes in map"<<nl;

    for(auto x : map){
        cout << "Key : " << x.first << " Value : " << x.second<<nl;
    }

    // all method same as set

}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}