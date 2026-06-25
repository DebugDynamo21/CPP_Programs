// WAP to find the maximum row sum from the given 2D array.

#include <iostream>
using namespace std;

int maxRowSum(int mat[][3],int rows,int cols){
    int maxSum = INT_MIN;

    for(int i = 0; i < rows; i++){
        int currRowSum = 0;
        for(int j = 0; j < cols; j++){
            currRowSum += mat[i][j];
        }
        maxSum = max(currRowSum, maxSum);
    }

    return maxSum;
}

int main(){
    int rows = 4;
    int cols = 3;

    int mat[][3] = {{1, 2, 3,}, {4, 5, 6}, {7, 8, 9,}, {10, 11, 12}};
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum row sum is: " << maxRowSum(mat, rows, cols) << endl;
    
    return 0; 
}