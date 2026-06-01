#include <bits/stdc++.h>
using namespace std;
constexpr char nl = '\n';
void solve(){
    set<int> s; // dont allow duplicate output are stored in sorted order
    s.insert(10);
    s.insert(30);
    s.insert(45);
    s.insert(20);

    for(auto x : s){
        cout<<x<<nl;
    }

    if(s.find(10) != s.end()) cout<<"Item is found"<<nl;
    s.erase(20);
    cout<<s.size()<<nl;

    multiset<int> mset; // this allow duplicate but also sorted
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}