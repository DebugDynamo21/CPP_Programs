/* First non-repeating character of given string
Given a string s of lowercase English letters, the task is to find the first non-repeating 
character. If there is no such character, return '$'.

Examples: 

Input: s = "geeksforgeeks"
Output: 'f'
Explanation: 'f' is the first character in the string which does not repeat.

Input: s = "racecar"
Output: 'e'
Explanation: 'e' is the only character in the string which does not repeat.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

char nonRepeatingChar(string& s){
    int n = s.size();

    for(int i = 0; i < n; ++i){
        bool found = false;

        for(int j = 0; j < n; ++j){
            if(i != j && s[i] == s[j]){
                found = true;
                break;
            }
        }

        if(!found){
            return s[i];
        }
    }

    return '$';
}

int main(){
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Non-Repeating character is: " << nonRepeatingChar(s) << endl;
    return 0; 
}

/*  BRUTE FORCE - O(N^2)
The idea is to use two nested loops, the outer loop for picking an element and the inner loop for finding 
another occurrence of the picked character in the string. As soon as we find a character which has only one 
occurrence in the input string, return it. If all characters have multiple occurrences, return '$'.
*/