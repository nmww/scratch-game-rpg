// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
#include <vector>
#include <iostream>

int main()
{
    // cout << "Hello, world!" << endl;
    // Create an empty vector 
    std::vector<int> vect;  
     
    vect.push_back(10); 
    vect.push_back(20); 
    vect.push_back(30); 
  
    for (int x : vect) 
        std::cout << x << " "; 
  
    return 0;
}