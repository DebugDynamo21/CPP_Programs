// Write a program to implement unordered map.
// This program creates an unordered_map named fruits to store fruit names as 
// keys and their quantities as values.

#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> fruits;

    fruits["Apple"] = 10;
    fruits["Mango"] = 20;
    fruits["Banana"] = 30;
    fruits["Litchi"] = 40;

    cout << "Apple : " << fruits["Apple"] << endl;
    cout << "Mango : " << fruits["Mango"] << endl;
    cout << "Banana : " << fruits["Banana"] << endl;
    cout << "Litchi : " << fruits["Litchi"] << endl;

    return 0;
}