// WAP to solve the leetcode problem-20 valid parentheses.
/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/

#include <iostream>
#include <stack>
using namespace std;

bool isValid(string str){   // T.C.- O(n)
    stack<char> st;

    for(int i = 0; i < str.size(); i++){

        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            st.push(str[i]);    // push all the opening characters
        }else{
            if(st.size() == 0){
                return false;
            }

            if((st.top() == '(' && str[i] == ')' ) || 
                (st.top() == '{' && str[i] == '}' ) || 
                (st.top() == '[' && str[i] == ']')) {
                
                    st.pop();   // pop the closing characters
            }else{  // no match found
                return false;
            }
        }
    }
    return st.size() == 0;  // corner case when opening brackets > closing brackets
}

int main(){
    string s;
    cout << "Enter a string including only -'(), {}, []': ";
    cin >> s;

    cout << "Is Valid Parentheses: " << isValid(s) << endl;
    return 0; 
}