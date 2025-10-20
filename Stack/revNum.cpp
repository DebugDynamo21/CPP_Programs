// Given a number, reverse using stack.

#include <iostream>
using namespace std;
int main(){
    stack<int> st;
    int num = 12345;
    while(num > 0){
        st.push(num % 10);
        num /= 10;
    }

    int revNum = 0, multiplier = 1;

    while(!st.empty()){
        int digit = st.top();
        st.pop();
        revNum = revNum + digit*multiplier;
        multiplier *= 10;
    }
    cout << "Reverse number: " << revNum << endl;
    return 0; 
}