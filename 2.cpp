#include <iostream>

using namespace std;

int main()
{
    int j_max, j_min, max = -99999, min = 99999;
    int arr[30];
    int n;

    cout << "Enter the number of elements in the array (max 30): ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
            j_max = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            j_min = i;
        }
    }
    arr[j_max] = min;
    arr[j_min] = max;

    cout << 'Inversed array:';
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
}