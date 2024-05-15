#include <iostream>

using namespace std;

int main() {
    int arr[30];
    int n;

    cout << "Enter the number of elements in the array (max 30): ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The unique elements in the array are: ";
    for (int i = 0; i < n; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}