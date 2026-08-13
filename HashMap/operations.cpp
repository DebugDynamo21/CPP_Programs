// Common HashMap Operations

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> mp;

    // Insert
    mp["Apple"] = 10;
    mp["Mango"] = 20;
    mp["Cherry"] = 30;

    // Access
    cout << "Apple Value: " << mp["Apple"] << endl;
    cout << "Mango Value: " << mp["Mango"] << endl;
    cout << "Cherry Value: " << mp["Cherry"] << endl;

    // Search
    if(mp.find("Cherry") != mp.end()){
        cout << "\nCherry Found" << endl;
    }

    // Traversal
    cout << "\nElements:\n";
    for(auto& pair: mp){
        cout << pair.first << " -> " << pair.second << endl;
    }

    // Delete
    mp.erase("Mango");
    cout << "\nSize after deletion: " << mp.size() << endl;
    return 0; 
}

// All operations have avg TC = O(1) and Worst cse TC= O(n).