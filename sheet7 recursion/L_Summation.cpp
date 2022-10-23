#include <iostream>
#include <algorithm>
using namespace std;

long long Sum(int arr[], int len)
{
    if (len == 1)
    {
        return arr[len - 1];
    }

    return Sum(arr, len - 1) + arr[len - 1];
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << Sum(array, n);

    return 0;
}