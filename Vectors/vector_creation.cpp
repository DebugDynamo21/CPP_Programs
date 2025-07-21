#include <iostream>
#include <vector>
using namespace std;

int main(){
    //method -1
    vector<int> v1 = {1, 2, 3};

    // method -2
    vector<int> v2(5,0); //5-size, 0 - default value at each index
    
    //char vector
    vector<char>v3 = {'a', 'b', 'c', 'd', 'e'};
    
    //To print the vector
    for(int val : v1){
        cout << val << " ";
    }
    cout << endl;
    return 0; 
}