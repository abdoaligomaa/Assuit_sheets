#include <iostream>
using namespace std;
int flag = 0;
void print_array_indices(int arr[], int size)
{
    if (size == 0 || size == 1)
        return;
    // for removing space in the first step
    // ________________________________
    if (flag)
    {
        cout << " ";
    }
    flag = 1;
    // ________________________________________________
    // to get the second number of the array in reverse order
    cout << arr[size - 2];

    print_array_indices(arr, size - 2);
}

int main()
{
    int n, a;
    cin >> n;
    int array[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a;
        array[i]=a;
    }
    print_array_indices(array, n);

    return 0;
}