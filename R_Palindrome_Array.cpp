#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (size_t i = 0; i < n / 2; i++)
    {
        if (!(arr[i] == arr[n - i - 1]))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}