// Array using loops

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int marks[n];
    cout << "Enter marks: ";
    for(int i = 0; i < n; i++){
        cin >> marks[i];
    }
    cout << "Marks: ";
    for(int i = 0; i < n; i++){
        cout << marks[i] << " ";
    }
    cout << endl;
    return 0; 
}