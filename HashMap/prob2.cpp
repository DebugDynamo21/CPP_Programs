/* Frequency of each character in a String using unordered_map in C++
Given a string str, the task is to find the frequency of each character of 
a string using an unordered_map in C++ STL.

Examples: 

Input: str = "geeksforgeeks" 
Output: 
r 1  
e 4 
s 2 
g 2 
k 2 
f 1 
o 1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

void countFreq(string s){
    unordered_map<char, int> freq;

    for(int i = 0; i < s.size(); i++){
        // If the current characters is not found then insert current characters with frequency 1
        if(freq.find(s[i]) == freq.end()){
            freq.insert(make_pair(s[i], 1));
        }else{
            // update the frequency
            freq[s[i]]++;
        }
    }

    //Traverse the map to print the frequency
    for (auto& it : freq) {
        cout << it.first << ": " << it.second << '\n';
    }
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    countFreq(s);
    return 0; 
}