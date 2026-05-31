#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
    // using stack and its method
    
    // Creating stack
    stack<int> st;
    st.push(10); // inserting in the stack
    cout<<st.top()<<endl; // excessing top elemnt
    st.pop(); // its remove top elementz
    if(st.empty()){
        cout<<"The Stack is empty\n";
    }
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}