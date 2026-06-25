#include <iostream>
using namespace std;

pair<int, int> linearSearch(int mat[][3],int rows, int cols, int key){
    pair<int, int> idx = {-1, -1};

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(mat[i][j] == key){
                idx = {i, j};
            }
        }
    }
    return idx;
}

int main(){
    int mat[][3] = {{1,2,3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    
    int key;
    cout << "Enter a value to search: ";
    cin >> key;

    pair<int ,int> res = linearSearch(mat, rows, cols, key);

    if(res.first != -1){
        cout << "Key is found at index: {" << res.first << ", " << res.second << "}" << endl;
    }else{
        cout << "{" << res.first << ", " << res.second << "}" << endl;
    }
    
    return 0; 
}