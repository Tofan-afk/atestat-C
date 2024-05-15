#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number in base 10: ";
    cin >> n;

    // Convert the number to base 2 and store the digits in an array
    int binaryDigits[32];
    int i = 0;
    while (n > 0)
    {
        binaryDigits[i] = n % 2;
        n /= 2;
        i++;
    }

    // Output the binary digits
    cout << "The binary representation of " << n << " is: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryDigits[j];
    }
    cout << endl;

    return 0;
}