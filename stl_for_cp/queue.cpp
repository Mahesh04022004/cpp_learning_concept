#include <bits/stdc++.h>
using namespace std;

void solve(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    while(!q.empty()){
        cout<<q.front()<<endl;
        cout<<"Excessing the queue element form the back"<<endl;
        cout<<q.back()<<endl;
        q.pop(); // removes elemnt from the front
    }

}

int32_t main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}