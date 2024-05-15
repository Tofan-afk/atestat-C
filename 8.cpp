#include <iostream>

using namespace std;

int main()
{
    int n, max = -9999999;
    cout << "Type the square matrix size: ";
    cin >> n;
    int m[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cout << "Insert the element in row " << i << " column " << j << " : ";
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i][i] > max)
        {
            max = m[i][i];
        }
    }
    cout << "Maximum elment: " << max;
}