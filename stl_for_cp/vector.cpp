#include <bits/stdc++.h>
using namespace std;

// Vectors are the most important data structure in C++ for CP. They're like ArrayList in Java but much more powerful with built-in operations that Java programmers dream of.



void solve(){
    cout<<"The code is running for stl";
    // declaring style and differnet ways 
    vector<int> v;

    vector<int> v2(5);           // {0, 0, 0, 0, 0}
    
    // With size and value
    vector<int> v3(5, 10);       // {10, 10, 10, 10, 10}
    
    // From initializer list
    vector<int> v4 = {1, 2, 3, 4, 5};
    
    // From array
    int arr[] = {1, 2, 3, 4, 5};
    vector<int> v5(arr, arr + 5);
    
    // Copy constructor
    vector<int> v6(v4);
    
    // Using iterators
    vector<int> v7(v4.begin(), v4.end());
    
    // 2D vector
    vector<vector<int>> matrix(3, vector<int>(4, 0));

     // Size operations
    int size = v.size();           // 5 (number of elements)
    int max_size = v.max_size();   // Maximum possible size (huge number)
    int capacity = v.capacity();   // Current allocated space (>= size)
    bool empty = v.empty();        // false

    // Clear all elements
    v.clear();
    
    // Direct access (no bounds checking - faster)
    int x1 = v[0];                 // 10
    int x2 = v[4];                 // 50
    
    // At() with bounds checking (throws exception - slower)
    int x3 = v.at(0);              // 10
    // int x4 = v.at(10);          // Throws out_of_range exception
    
    // Front and back
    int front = v.front();          // 10
    int back = v.back();  

    // Push back (add to end) - O(1) amortized
    v.push_back(4);                 // {1, 2, 3, 4}
    v.push_back(5);                 // {1, 2, 3, 4, 5}
    
    // Insert at position
    v.insert(v.begin(), 0);         // {0, 1, 2, 3, 4, 5}
    v.insert(v.begin() + 2, 99);    // {0, 1, 99, 2, 3, 4, 5}
    
    // Insert multiple copies
    v.insert(v.begin() + 1, 3, 7);  // {0,7,7,7,1,99,2,3,4,5}
    
    // Insert from another vector
    vector<int> v2 = {100, 200};
    v.insert(v.end(), v2.begin(), v2.end());

    // Pop back (remove last) - O(1)
    v.pop_back(); 

     // Sorting
    sort(v.begin(), v.end());                    // {1,2,3,4,5,6,7,8,9}
    sort(v.begin(), v.end(), greater<int>());    // {9,8,7,6,5,4,3,2,1}

    // Binary search (vector must be sorted)
    sort(v.begin(), v.end());
    bool found = binary_search(v.begin(), v.end(), 5); 

    // Reverse
    reverse(v.begin(), v.end());
    
    // Rotate
    rotate(v.begin(), v.begin() + 3, v.end());  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}