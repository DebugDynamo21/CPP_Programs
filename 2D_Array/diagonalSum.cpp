// WAP to find the diagonal sum in a matrix.

#include <iostream>
using namespace std;

int diagonalSum(int mat[][4], int n){   // T.C - O(n*n)
    int diagSum = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                diagSum += mat[i][j];
            }else if(j == n-i-1){
                diagSum += mat[i][j];
            }
        }
        
    }
    return diagSum;
}

int main(){
    int rows = 4;
    int mat[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 4; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Primary & Secondary diagonal sum is: " << diagonalSum(mat, rows) << endl;
    return 0; 
}