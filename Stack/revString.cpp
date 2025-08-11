// Given a string, reverse it using a stack.

#include <iostream>
using namespace std;
int main(){
    stack<char> st;
    string str = "Hello, World!";

    for(char i : str){
        st.push(i);
    }

    for(int i = 0; i < str.length(); i++){
        str[i] = st.top();
        st.pop();
    }

    cout << "Reversed string: " << str << endl;
    return 0; 
}