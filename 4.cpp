#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Type the natural number, not equal to zero: ";
    cin >> n;

    while (n != 0)
    {
        sum += n % 10;
        n = n / 10;
        i++;
    }

    cout << "The result is: " << sum / i;
    return 0;
}