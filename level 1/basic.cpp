#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    // Your code here
    // Data type to know for cp

    // Primitive Data type

    int a = 10; // use this for loop and for index stuff only avoid this for answer and long value
    long long b = 1000000000; // always use this to store answer and all the calculation stuff for exceeding value 
    // short way to use this {using ll = long long}  this i have already define above 
    ll c = 1000000; // short way to use it
    bool flag = true; // this is used to store boolean value
    char ch1 = 'a'; // if you want to use character 
    double d = 18.2; // used for floating point value rarely used in cp
    

    // Array and String 

    int arr[10]; // this is the way to declare the array
    int nums[5] = {1,2,3,4,5}; // Fully initialized
    // for length for array always try to use array with fixed size length if you need variable size use vector
    // if you still want the size 
    int len = sizeof(arr) / sizeof(arr[0]); // this will give you length in c++
    //  Arrays are automatically passed by reference (pointer) - you don't need to do anything special.{passing in function}


    //String in C++

    string s = "hello";
    int n = s.length(); // s.size() both are valid
    // s.empty() this is used to check weather string is empty or not
    // Read character
    char ch = s[0];        // 'h'
    char ch2 = s.at(0);    // 'h' (safer, checks bounds)
    // WRITE character (CAN'T do this in Java!)
    s[0] = 'H';            // Now s = "Hello"
    s[1] = 'E';            // Now s = "HEllo"
    s[4] = 'Y';            // Now s = "HEllY"
    cout << s << "\n";     // "HEllY"
    // at() also works for writing
    s.at(0) = 'h';         // Now s = "hEllY"
    // using substring 
    string sub1 = s.substr(6);
    string sub2 = s.substr(0, 5); 

    int num = stoi(s);           // string to int
    int num = 123;

    // Method 1: to_string() (C++11, preferred)
    string s1 = to_string(num);        // "123"
    string s2 = to_string(3.14159);    // "3.141590




    

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;  
    
    while(t--) {
        solve();
    }
    
    return 0;
}