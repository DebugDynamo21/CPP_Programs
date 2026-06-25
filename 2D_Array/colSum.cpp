// WAP to find te maximum column sum in a matrix.

#include <iostream>
using namespace std;

int maxColSum(int mat[][4], int rows, int cols){
    int maxSum = INT_MIN;
    
    for(int i = 0; i < cols; i++){
        int currColSum = 0;
        for(int j = 0; j < rows; j++){
            currColSum += mat[j][i];
        }
        maxSum = max(maxSum, currColSum);
    }
    return maxSum;
}

int main(){
    int mat[][4] = {{1, 2, 3,}, {4, 5, 6}, {7, 8,  9,}, {10, 11, 12}};
    int rows = 4;
    int cols = 3;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum column sum: " << maxColSum(mat, rows, cols) << endl;
    return 0; 
}