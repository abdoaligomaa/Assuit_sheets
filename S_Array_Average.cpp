#include <iostream>
#include <algorithm>
using namespace std;

float avg(int arr[], int len)
{
    if (len == 1)
    {
        return arr[0];
    }

    return float((arr[len - 1] + avg(arr, len - 1) * (len - 1)) / len);
}

int main()
{
    long long n;
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float result = avg(arr, n);

    cout << result;

    return 0;
}