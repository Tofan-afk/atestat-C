#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int col1, col2;
    cout << "Enter the indices of the two columns to swap: ";
    cin >> col1 >> col2;

    for (int i = 0; i < rows; i++)
    {
        swap(matrix[i][col1 - 1], matrix[i][col2 - 1]);
    }

    cout << "The resulting matrix is:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}